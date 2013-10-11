#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example3
				{

					void Client::main(std::string args[])
					{
						//����ObjectStructure
						ObjectStructure *os = new ObjectStructure();
						//����Ҫ�������ṹ��Ԫ��
						Element *eleA = new ConcreteElementA();
						Element *eleB = new ConcreteElementB();
						//��Ԫ�ؼ������ṹ
						os->addElement(eleA);
						os->addElement(eleB);

						//����������
						Visitor *visitor = new ConcreteVisitor1();

						//����ҵ����ķ���
						os->handleRequest(visitor);
					}
				}
			}
		}
	}
}