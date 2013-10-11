#include "NormalLogin.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example1
				{

					bool NormalLogin::login(LoginModel *lm)
					{
						//1�������ݿ��ȡ��¼��Ա����Ϣ�� ���Ǹ����û����ȥ��ȡ��Ա������
						UserModel *um = this->findUserByUserId(lm->getUserId());
						//2���жϴ�ǰ̨���ݹ����ĵ�¼���ݣ������ݿ������е������Ƿ�ƥ��
						//���ж��û��Ƿ���ڣ����umΪnull��˵���û��϶�������
						//���ǲ�Ϊnull���û���һ�����ڣ���Ϊ���ݲ���ܷ���new UserModel();
						//��˻���Ҫ����һ�����ж�
						if (um != 0)
						{
							//����û����ڣ�����û���ź������Ƿ�ƥ��
							if (um->getUserId().equals(lm->getUserId()) && um->getPwd().equals(lm->getPwd()))
							{
								return true;
							}
						}
						return false;
					}

					UserModel *NormalLogin::findUserByUserId(std::string userId)
					{
						// ����ʡ�Ծ���Ĵ�������ʾ�⣬����һ����Ĭ�����ݵĶ���
						UserModel *um = new UserModel();
						um->setUserId(userId);
						um->setName("test");
						um->setPwd("test");
						um->setUuid("User0001");
						return um;
					}
				}
			}
		}
	}
}