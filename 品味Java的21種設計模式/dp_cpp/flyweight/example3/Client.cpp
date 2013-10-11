#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example3
				{

					void Client::main(std::string args[]) throw(Exception)
					{
						//��Ҫ�ȵ�¼��Ȼ�����ж��Ƿ���Ȩ��
						SecurityMgr *mgr = SecurityMgr::getInstance();
						mgr->login("����");
						mgr->login("����");
						bool f1 = mgr->hasPermit("����","н������","�鿴");
						bool f2 = mgr->hasPermit("����","н������","�鿴");

						puts("f1=="+f1);
						puts("f2=="+f2);

						for(int i=0;i<3;i++)
						{
							mgr->login("����"+i);
							mgr->hasPermit("����"+i,"н������","�鿴");
						}
					}
				}
			}
		}
	}
}