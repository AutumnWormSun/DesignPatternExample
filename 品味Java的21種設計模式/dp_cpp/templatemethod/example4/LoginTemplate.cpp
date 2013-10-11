#include "LoginTemplate.h"

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

					bool LoginTemplate::login(LoginModel *lm)
					{
						//1�����ݵ�¼��Ա�ı��ȥ��ȡ��Ӧ������
						LoginModel *dbLm = this->findLoginUser(lm->getLoginId());
						if(dbLm!=0)
						{
							//2����������м���
							std::string encryptPwd = this->encryptPwd(lm->getPwd());
							//�Ѽ��ܺ���������ûص���¼����ģ������
							lm->setPwd(encryptPwd);
							//3���ж��Ƿ�ƥ��
							return this->match(lm, dbLm);
						}
						return false;
					}

					std::string LoginTemplate::encryptPwd(std::string pwd)
					{
						return pwd;
					}

					bool LoginTemplate::match(LoginModel *lm, LoginModel *dbLm)
					{
						if(lm->getLoginId().equals(dbLm->getLoginId()) && lm->getPwd().equals(dbLm->getPwd()))
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}