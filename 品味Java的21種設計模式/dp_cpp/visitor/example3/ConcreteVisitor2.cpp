#include "ConcreteVisitor2.h"

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

					void ConcreteVisitor2::visitConcreteElementA(ConcreteElementA *element)
					{
						//��ȥ����ConcreteElementAʱ����Ҫִ�еĹ���ʵ��������
						//������Ҫ����Ԫ�����еĹ��ܣ����磺
						element->opertionA();
					}

					void ConcreteVisitor2::visitConcreteElementB(ConcreteElementB *element)
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