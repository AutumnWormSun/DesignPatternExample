#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example1
				{

					void Client::main(std::string args[])
					{
						Api *api = new Impl();
						api->test1("��������Ҫ���ţ�ֻ�Ǹ����Զ��ѣ�");
					}
				}
			}
		}
	}
}