#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						//��Ҫ�ı䣬û��new Impl()�ˣ�ȡ����֮Factory.createApi()
						//ע�����ﴫ�ݵĲ������޸Ĳ����Ϳ����޸���Ϊ�����Կ���
						Api *api = Factory::createApi(2);
						api->test1("��������Ҫ���ţ�ֻ�Ǹ����Զ��ѣ�");
					}
				}
			}
		}
	}
}