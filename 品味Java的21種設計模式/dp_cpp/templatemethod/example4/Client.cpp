#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//׼����¼�˵���Ϣ
						LoginModel *lm = new LoginModel();
						lm->setLoginId("admin");
						lm->setPwd("workerpwd");
						//׼�����������жϵĶ���
						LoginTemplate *lt = new WorkerLogin();
						LoginTemplate *lt2 = new NormalLogin();
						//���е�¼����
						bool flag = lt->login(lm);
						puts("���Ե�¼����ƽ̨="+flag);

						bool flag2 = lt2->login(lm);
						puts("���Խ�����ͨ��Ա��¼="+flag2);

						//׼����¼�˵���Ϣ
						NormalLoginModel *nlm = new NormalLoginModel();
						nlm->setLoginId("testUser");
						nlm->setPwd("testpwd");
						nlm->setQuestion("testQuestion");
						nlm->setAnswer("testAnswer");
						//׼�����������жϵĶ���
						LoginTemplate *lt3 = new NormalLogin2();
						//���е�¼����
						bool flag3 = lt3->login(nlm);
						puts("���Խ�����ͨ��Ա��ǿ���¼="+flag3);
					}
				}
			}
		}
	}
}