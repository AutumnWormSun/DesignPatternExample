#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//�����豻����Ķ���
						Adaptee *adaptee = new Adaptee();
						//�����ͻ�����Ҫ���õĽӿڶ���
						Target *target = new Adapter(adaptee);
						//������
						target->request();
					}
				}
			}
		}
	}
}