#include "ConcreteElementA.h"

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

					void ConcreteElementA::accept(Visitor *visitor)
					{
						//�ص������߶������Ӧ����
						visitor->visitConcreteElementA(this);
					}

					void ConcreteElementA::opertionA()
					{
						//���еĹ���ʵ��
					}
				}
			}
		}
	}
}