#include "ConcreteVisitor1.h"

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

					void ConcreteVisitor1::visitConcreteElementA(ConcreteElementA *element)
					{
						//��ȥ����ConcreteElementAʱ����Ҫִ�еĹ���ʵ��������
						//������Ҫ����Ԫ�����еĹ��ܣ����磺
						element->opertionA();
					}

					void ConcreteVisitor1::visitConcreteElementB(ConcreteElementB *element)
					{
						//��ȥ����ConcreteElementBʱ����Ҫִ�еĹ���ʵ��������
						//������Ҫ����Ԫ�����еĹ��ܣ����磺
						element->opertionB();
					}
				}
			}
		}
	}
}