#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example4
				{
					using javax::xml::parsers::DocumentBuilder;
					using javax::xml::parsers::DocumentBuilderFactory;
					using javax::xml::parsers::ParserConfigurationException;
					using org::w3c::dom::Document;
					using org::w3c::dom::Element;

					void Client::main(std::string args[]) throw(Exception)
					{
						//׼��������
						Context *c = new Context("InterpreterTest.xml");

						//��Ҫ��ȡ���dԪ�ص�ֵ��Ҳ�������±��ʽ��ֵ��"root/a/b/d$"

										//		//����Ҫ�����������ĳ����﷨��
										//		ElementExpression root = new ElementExpression("root");
										//		ElementExpression aEle = new ElementExpression("a");
										//		ElementExpression bEle = new ElementExpression("b");
										//		ElementsTerminalExpression dEle = new ElementsTerminalExpression("d");
										//		//�������
										//		root.addEle(aEle);
										//		aEle.addEle(bEle);
										//		bEle.addEle(dEle);
										//		//����
										//		String ss[] = root.interpret(c);
										//		for(String s : ss){
										//			System.out.println("d��ֵ��="+s);	
										//		}

						//��Ҫ��ȡdԪ�ص�id���ԣ�Ҳ�������±��ʽ��ֵ��"a/b/d$.id$"
						ElementExpression *root = new ElementExpression("root");
						ElementExpression *aEle = new ElementExpression("a");
						ElementExpression *bEle = new ElementExpression("b");
						ElementsExpression *dEle = new ElementsExpression("d");
						PropertysTerminalExpression *prop = new PropertysTerminalExpression("id");
						//���
						root->addEle(aEle);
						aEle->addEle(bEle);
						bEle->addEle(dEle);
						dEle->addEle(prop);
						//����
//ORIGINAL LINE: String ss[] = root.interpret(c);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						std::string *ss = root->interpret(c);
						for (std::string::const_iterator s = ss->begin(); s != ss->end(); ++s)
						{
							puts("d������idֵ��=" + *s);
						}

						//���Ҫʹ��ͬһ�������ģ��������н�������Ҫ���³�ʼ�������Ķ���
						//����Ҫ�����������ٻ�ȡһ������id��ֵ����Ȼ������������Ԫ�أ�
						//���½�����ֻҪ����ʹ��ͬһ�������ģ�����Ҫ���³�ʼ�������Ķ���
						c->reInit();
//ORIGINAL LINE: String ss2[] = root.interpret(c);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						std::string *ss2 = root->interpret(c);
						for (std::string::const_iterator s = ss2->begin(); s != ss2->end(); ++s)
						{
							puts("���»�ȡd������idֵ��=" + *s);
						}
					}
				}
			}
		}
	}
}