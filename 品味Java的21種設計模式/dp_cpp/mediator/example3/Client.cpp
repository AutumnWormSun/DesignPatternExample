#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example3
				{

					void Client::main(std::string args[])
					{
						DepUserMediatorImpl *mediator = DepUserMediatorImpl::getInstance();
						//׼��Ҫ�����Ĳ��ţ�������Ҫһ�����ű��
						Dep *dep = new Dep();
						dep->setDepId("d1");
						Dep *dep2 = new Dep();
						dep2->setDepId("d2");
						//׼�����ڲ��Ե���Ա��Ҳֻ��Ҫһ����Ա���
						User *user = new User();
						user->setUserId("u1");

						//���Գ������ţ�������֮ǰ�����һ�£��������Ա������Щ����		
						puts("��������ǰ------------------");
						mediator->showUserDeps(user);

						//����ִ��ҵ�񣬳����������
						dep->deleteDep();

						//�ٴ����һ�£��������Ա������Щ����
						puts("�������ź�------------------");
						mediator->showUserDeps(user);

						//������Ա��ְ��������֮ǰ�����һ�£�����������¶�����Щ��Ա
						puts("---------------------------------");
						puts("��Ա��ְǰ------------------");
						mediator->showDepUsers(dep2);

						//����ִ��ҵ����Ա��ְ
						user->dimission();

						//�ٴ����һ�£�����������¶�����Щ��Ա
						puts("��Ա��ְ��------------------");
						mediator->showDepUsers(dep2);
					}
				}
			}
		}
	}
}