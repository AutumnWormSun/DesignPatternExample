#include "A.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example6
				{

					void A::setC(C *c)
					{
						this->c = c;
					}

					void A::t1()
					{
						//������Ҫʹ��C�࣬�����ֲ�������ȥ����C�ˣ���ô�죿
						//������Ҫ����ⲿע�룬������ʡ�ģ�
						//�Լ����ù���ô��ȡC��ֱ��ʹ�þͺ���
						c->tc();
					}
				}
			}
		}
	}
}