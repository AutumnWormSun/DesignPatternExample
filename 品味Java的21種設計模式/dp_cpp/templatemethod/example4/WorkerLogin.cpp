#include "WorkerLogin.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example4
				{

					LoginModel *WorkerLogin::findLoginUser(std::string loginId)
					{
						// ����ʡ�Ծ���Ĵ�������ʾ�⣬����һ����Ĭ�����ݵĶ���
						LoginModel *lm = new LoginModel();
						lm->setLoginId(loginId);
						lm->setPwd("workerpwd");
						return lm;
					}

					std::string WorkerLogin::encryptPwd(std::string pwd)
					{
						//���Ǹ���ķ������ṩ�����ļ���ʵ��
						//�����������м��ܣ�����ʹ�ã�MD5��3DES�ȵȣ�ʡ����
						puts("ʹ��MD5�����������");
						return pwd;
					}
				}
			}
		}
	}
}