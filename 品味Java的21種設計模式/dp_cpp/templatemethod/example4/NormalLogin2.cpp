#include "NormalLogin2.h"

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

					LoginModel *NormalLogin2::findLoginUser(std::string loginId)
					{
						// ����ʡ�Ծ���Ĵ�������ʾ�⣬����һ����Ĭ�����ݵĶ���
						//ע��һ�㣺����ʹ�õ����Լ���Ҫ������ģ����
						NormalLoginModel *nlm = new NormalLoginModel();
						nlm->setLoginId(loginId);
						nlm->setPwd("testpwd");
						nlm->setQuestion("testQuestion");
						nlm->setAnswer("testAnswer");

						return nlm;
					}

					bool NormalLogin2::match(LoginModel *lm, LoginModel *dbLm)
					{
						//���������Ҫ���ǣ���Ϊ���ڽ��е�¼���Ƶ�ʱ��
						//��Ҫ���4��ֵ�Ƿ���ȷ������������ȱʡ��2��

						//�ȵ��ø���ʵ�ֺõģ�����ź������Ƿ���ȷ
						bool f1 = LoginTemplate::match(lm, dbLm);
						if(f1)
						{
							//�����ź�������ȷ�������������ʹ��Ƿ���ȷ

							//�Ȱ�����ת�����Լ���Ҫ������
							NormalLoginModel *nlm = static_cast<NormalLoginModel*>(lm);
							NormalLoginModel *dbNlm = static_cast<NormalLoginModel*>(dbLm);
							//�������ʹ��Ƿ���ȷ
							if(dbNlm->getQuestion().equals(nlm->getQuestion()) && dbNlm->getAnswer().equals(nlm->getAnswer()))
							{
								return true;
							}
						}
						return false;
					}
				}
			}
		}
	}
}