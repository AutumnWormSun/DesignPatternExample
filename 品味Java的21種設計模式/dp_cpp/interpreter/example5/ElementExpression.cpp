#include "ElementExpression.h"

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
					using org::w3c::dom::Element;
					using org::w3c::dom::NodeList;

					ElementExpression::ElementExpression(std::string eleName)
					{
						InitializeInstanceFields();
						this->eleName = eleName;
					}

					bool ElementExpression::addEle(ReadXmlExpression *ele)
					{
						this->eles->add(ele);
						return true;
					}

					bool ElementExpression::removeEle(ReadXmlExpression *ele)
					{
						this->eles->remove(ele);
						return true;
					}

					std::string *ElementExpression::interpret(Context *c)
					{
						//��ȡ����������ĸ���Ԫ��
						std::vector<Element*> pEles = c->getPreEles();
						Element *ele = 0;
						//�ѵ�ǰ��ȡ��Ԫ�طŵ�����������
						std::vector<Element*> nowEles = std::vector<Element*>();
						if(pEles.empty())
						{
							//˵�����ڻ�ȡ���Ǹ�Ԫ��
							ele = c->getDocument()->getDocumentElement();
							pEles.push_back(ele);
							c->setPreEles(pEles);
						}
						else
						{
							for (std::vector<Element*>::const_iterator tempEle = pEles.begin(); tempEle != pEles.end(); ++tempEle)
							{
								nowEles.addAll(c->getNowEles(*tempEle, eleName));
								if(nowEles.size()>0)
								{
									//�ҵ�һ����ֹͣ
									break;
								}
							}
							std::vector<Element*> tempList = std::vector<Element*>();
							tempList.push_back(nowEles.front());
							c->setPreEles(tempList);
						}

						//ѭ��������Ԫ�ص�interpret����
//ORIGINAL LINE: String [] ss = nullptr;
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						std::string *ss = 0;
						for (Collection<ReadXmlExpression*>::const_iterator tempEle = eles->begin(); tempEle != eles->end(); ++tempEle)
						{
							ss = (*tempEle)->interpret(c);
						}
						return ss;
					}
				}
			}
		}
	}
}