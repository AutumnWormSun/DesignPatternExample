#include "LoginTemplate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example7
				{

					bool LoginTemplate::login(LoginModel *lm, LoginCallback *callback)
					{
						//1�����ݵ�¼��Ա�ı��ȥ��ȡ��Ӧ������
						LoginModel *dbLm = callback->findLoginUser(lm->getLoginId());
						if(dbLm!=0)
						{
							//2����������м���
							std::string encryptPwd = callback->encryptPwd(lm->getPwd(),this);
							//�Ѽ��ܺ���������ûص���¼����ģ������
							lm->setPwd(encryptPwd);
							//3���ж��Ƿ�ƥ��
							return callback->match(lm, dbLm,this);
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