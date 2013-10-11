#include "Parser.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example5
				{

					Parser::Parser()
					{
						//
					}

					ReadXmlExpression *Parser::parse(std::string expr)
					{
						//�ȳ�ʼ����¼�������Ԫ�ص����Ƶļ���
						listEle = std::vector<std::string>();

						//��һ�����ֽ���ʽ���õ���Ҫ������Ԫ�����ƺ͸�Ԫ�ض�Ӧ�Ľ���ģ��
						Map<std::string, ParserModel*> *mapPath = parseMapPath(expr);

						//�ڶ��������ݽڵ������ת����Ϊ��Ӧ�Ľ���������
						std::vector<ReadXmlExpression*> list = mapPath2Interpreter(mapPath);

						//����������ϳ����﷨����һ��Ҫ�����Ⱥ�˳������ϣ�
						//�������İ�����ϵ������
						ReadXmlExpression *returnRe = buildTree(list);

						return returnRe;
					}

					Map<std::string, ParserModel*> *Parser::parseMapPath(std::string expr)
					{
						//�Ȱ���/�ָ��ַ���
						StringTokenizer *tokenizer = new StringTokenizer(expr, BACKLASH);
						//��ʼ��һ��map������ŷֽ������ֵ
						Map<std::string, ParserModel*> *mapPath = std::map<std::string, ParserModel*>();
						while (tokenizer->hasMoreTokens())
						{
							std::string onePath = tokenizer->nextToken();
							if (tokenizer->hasMoreTokens())
							{
								//������һ��ֵ��˵���ⲻ�����һ��Ԫ��
								//�������ڵ��﷨�����Ա�Ȼ��������Ҳ��������
								setParsePath(false,onePath,false,mapPath);
							}
							else
							{
								//˵���������
								int dotIndex = onePath.find(DOT);
								if (dotIndex > 0)
								{
									//˵����Ҫ��ȡ���Ե�ֵ���ǾͰ���"."���ָǰ��ľ���Ԫ�����֣�����������Ե�����
									std::string eleName = onePath.substr(0, dotIndex);
									std::string propName = onePath.substr(dotIndex + 1);
									//��������ǰ����Ǹ�Ԫ�أ���Ȼ�������һ����Ҳ��������
									setParsePath(false,eleName,false,mapPath);
									//�������ԣ��������ڵ��﷨���壬����ֻ�������һ��
									setParsePath(true,propName,true,mapPath);
								}
								else
								{
									//˵����ȡԪ�ص�ֵ�����������һ��Ԫ�ص�ֵ
									setParsePath(true,onePath,false,mapPath);
								}
								break;
							}
						}
						return mapPath;
					}

					void Parser::setParsePath(bool end, std::string ele, bool propertyValue, Map<std::string, ParserModel*> *mapPath)
					{
						ParserModel *pm = new ParserModel();
						pm->setEnd(end);
						//�������$���ž�˵������һ��ֵ
						pm->setSingleVlaue(!(ele.find(DOLLAR)>0));
						pm->setPropertyValue(propertyValue);
						//ȥ��$
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'replace' method:
						ele = ele.replace(DOLLAR, "");
						mapPath->put(ele,pm);
						listEle.push_back(ele);
					}

					std::vector<ReadXmlExpression*> Parser::mapPath2Interpreter(Map<std::string, ParserModel*> *mapPath)
					{
						std::vector<ReadXmlExpression*> list = std::vector<ReadXmlExpression*>();
						//һ��Ҫ���շֽ���Ⱥ�˳����ת���ɽ���������
						for (std::vector<std::string>::const_iterator key = listEle.begin(); key != listEle.end(); ++key)
						{
							ParserModel *pm = mapPath->get(*key);
							ReadXmlExpression *obj = 0;
							if(!pm->isEnd())
							{
								if(pm->isSingleVlaue())
								{
									//�������һ������һ��ֵ��ת��Ϊ
									obj = new ElementExpression(*key);
								}
								else
								{
									//�������һ�����Ƕ��ֵ��ת��Ϊ
									obj = new ElementsExpression(*key);
								}
							}
							else
							{
								if(pm->isPropertyValue())
								{
									if(pm->isSingleVlaue())
									{
										//�����һ������һ��ֵ��ȡ���Ե�ֵ��ת��Ϊ
										obj = new PropertyTerminalExpression(*key);
									}
									else
									{
										//�����һ�����Ƕ��ֵ��ȡ���Ե�ֵ��ת��Ϊ
										obj = new PropertysTerminalExpression(*key);
									}
								}
								else
								{
									if(pm->isSingleVlaue())
									{
										//�����һ������һ��ֵ��ȡԪ�ص�ֵ��ת��Ϊ
										obj = new ElementTerminalExpression(*key);
									}
									else
									{
										//�����һ�����Ƕ��ֵ��ȡԪ�ص�ֵ��ת��Ϊ
										obj = new ElementsTerminalExpression(*key);
									}
								}
							}
							//��ת����Ķ�����ӵ�������
							list.push_back(obj);
						}
						return list;
					}

					ReadXmlExpression *Parser::buildTree(std::vector<ReadXmlExpression*> &list)
					{
						//��һ������Ҳ�Ƿ���ȥ�Ķ��󣬾��ǳ����﷨���ĸ�
						ReadXmlExpression *returnRe = 0;
						//������һ������
						ReadXmlExpression *preRe = 0;
						for (std::vector<ReadXmlExpression*>::const_iterator re = list.begin(); re != list.end(); ++re)
						{
							if(preRe==0)
							{
								//˵���ǵ�һ��Ԫ��
								preRe = *re;
								returnRe = *re;
							}
							else
							{
								//��Ԫ����ӵ���һ���������棬ͬʱ�ѱ��������ó�ΪoldRe����Ϊ��һ������ĸ����
								if(dynamic_cast<ElementExpression*>(preRe) != 0)
								{
									ElementExpression *ele = static_cast<ElementExpression*>(preRe);
									ele->addEle(*re);
									preRe = *re;
								}
								else if(dynamic_cast<ElementsExpression*>(preRe) != 0)
								{
									ElementsExpression *eles = static_cast<ElementsExpression*>(preRe);
									eles->addEle(*re);
									preRe = *re;
								}
							}
						}
						return returnRe;
					}
				}
			}
		}
	}
}