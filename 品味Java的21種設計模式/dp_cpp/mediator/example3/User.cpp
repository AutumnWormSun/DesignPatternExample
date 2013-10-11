#include "User.h"

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

					std::string User::getUserId()
					{
						return userId;
					}

					void User::setUserId(std::string userId)
					{
						this->userId = userId;
					}

					std::string User::getUserName()
					{
						return userName;
					}

					void User::setUserName(std::string userName)
					{
						this->userName = userName;
					}

					bool User::dimission()
					{
						//1��Ҫ��ͨ���н���ȥ����������������Ա��صĲ��ź���Ա�Ĺ�ϵ
						DepUserMediatorImpl *mediator = DepUserMediatorImpl::getInstance();
						mediator->deleteUser(userId);
						//2��Ȼ������������������Ա
						//��ע�⣬ʵ�ʿ����У���Ա��ְ���ǲ������ɾ����Ա��¼�ģ�
						//ͨ���ǰ���Ա��¼��״̬������ɾ��������ó���ɾ����
						//ֻ�ǲ��ٲμ��µ�ҵ�񣬵����Ѿ�������ҵ���¼�ǲ��ᱻ�������

						return true;
					}
				}
			}
		}
	}
}