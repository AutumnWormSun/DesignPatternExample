#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example3
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

						//��Ҫ��ȡcԪ�ص�ֵ��Ҳ�������±��ʽ��ֵ��"root/a/b/c"

										//		//����Ҫ�����������ĳ����﷨��
										//		ElementExpression root = new ElementExpression("root");
										//		ElementExpression aEle = new ElementExpression("a");
										//		ElementExpression bEle = new ElementExpression("b");
										//		ElementTerminalExpression cEle = new ElementTerminalExpression("c");
										//		//�������
										//		root.addEle(aEle);
										//		aEle.addEle(bEle);
										//		bEle.addEle(cEle);
										//		
										//		//����
										//		String ss[] = root.interpret(c);
										//		System.out.println("c��ֵ��="+ss[0]);

						//��Ҫ��ȡcԪ�ص�name���ԣ�Ҳ�������±��ʽ��ֵ��"root/a/b/c.name"
						//���ʱ��c�����ս��ˣ���Ҫ��c�޸ĳ�ElementExpressioin
						ElementExpression *root = new ElementExpression("root");
						ElementExpression *aEle = new ElementExpression("a");
						ElementExpression *bEle = new ElementExpression("b");
						ElementExpression *cEle = new ElementExpression("c");
						PropertyTerminalExpression *prop = new PropertyTerminalExpression("name");
						//���
						root->addEle(aEle);
						aEle->addEle(bEle);
						bEle->addEle(cEle);
						cEle->addEle(prop);

						//����
//ORIGINAL LINE: String ss[] = root.interpret(c);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						std::string *ss = root->interpret(c);
						puts("c������name��ֵ��="+ss[0]);

						//���Ҫʹ��ͬһ�������ģ��������н�������Ҫ���³�ʼ�������Ķ���
						//����Ҫ�����������ٻ�ȡһ������name��ֵ����Ȼ������������Ԫ�أ�
						//���½�����ֻҪ����ʹ��ͬһ�������ģ�����Ҫ���³�ʼ�������Ķ���
						c->reInit();
//ORIGINAL LINE: String ss2[] = root.interpret(c);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						std::string *ss2 = root->interpret(c);
						puts("���»�ȡc������name��ֵ��="+ss2[0]);
					}
				}
			}
		}
	}
}