#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
						//ͨ���򵥹�������ȡ�ӿڶ���
						Api *api = Factory::createApi(1);
						api->operation("����ʹ�ü򵥹���");
					}
				}
			}
		}
	}
}