#include "ConcreteElementB.h"

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

					void ConcreteElementB::accept(Visitor *visitor)
					{
						//�ص������߶������Ӧ����
						visitor->visitConcreteElementB(this);
					}

					void ConcreteElementB::opertionB()
					{
						//���еĹ���ʵ��
					}
				}
			}
		}
	}
}