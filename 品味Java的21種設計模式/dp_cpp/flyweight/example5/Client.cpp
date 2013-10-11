#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example5
				{

					void Client::main(std::string args[]) throw(Exception)
					{
						SecurityMgr *mgr = SecurityMgr::getInstance();
						bool f1 = mgr->hasPermit("����","н������","�鿴");
						bool f2 = mgr->hasPermit("����","н������","�鿴");
						bool f3 = mgr->hasPermit("����","н������","�޸�");

										//		Thread.sleep(4000);
						for(int i=0;i<3;i++)
						{
							mgr->hasPermit("����"+i,"н������","�鿴");
						}

						//�ر����ѣ�����鿴�����ô���������ָ����ʹ�õĴ���
						//ָ����SecurityMgr��queryByUser����ͨ����Ԫ����ȥ��ȡ��Ԫ����Ĵ���
						puts("н������,�鿴 ��������"+FlyweightFactory::getInstance()->getUseTimes("н������,�鿴")+"��");
						puts("н������,�޸� ��������"+FlyweightFactory::getInstance()->getUseTimes("н������,�޸�")+"��");
						puts("��Ա�б�,�鿴 ��������"+FlyweightFactory::getInstance()->getUseTimes("��Ա�б�,�鿴")+"��");
					}
				}
			}
		}
	}
}