#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example3
				{

					void Client::main(std::string args[])
					{
						//��Ҫ�ı䣬û��new Impl()�ˣ�ȡ����֮Factory.createApi()
						Api *api = Factory::createApi();
						api->test1("��������Ҫ���ţ�ֻ�Ǹ����Զ��ѣ�");
					}
				}
			}
		}
	}
}