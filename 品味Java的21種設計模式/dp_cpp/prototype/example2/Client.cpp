#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example2
				{

					Client::Client(Prototype *prototype)
					{
						this->prototype = prototype;
					}

					void Client::operation()
					{
						//����Ҫ����ԭ�ͽӿڵĶ���
						Prototype *newPrototype = prototype->clone();
					}
				}
			}
		}
	}
}