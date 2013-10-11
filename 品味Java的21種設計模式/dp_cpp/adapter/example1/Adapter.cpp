#include "Adapter.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace adapter
			{
				namespace example1
				{

					Adapter::Adapter(Adaptee *adaptee)
					{
						this->adaptee = adaptee;
					}

					void Adapter::request()
					{
						//����ת���Ѿ�ʵ���˵ķ�������������
						adaptee->specificRequest();
					}
				}
			}
		}
	}
}