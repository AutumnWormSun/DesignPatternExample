#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//׼����¼�˵���Ϣ
						LoginModel *lm = new LoginModel();
						lm->setLoginId("admin");
						lm->setPwd("workerpwd");
						//׼�����������жϵĶ���
						LoginTemplate *lt = new LoginTemplate();

						//���е�¼���ԣ��Ȳ�����ͨ��Ա��¼
								//�Լ�����Ҫ��ֱ��ת��ģ���е�Ĭ��ʵ��
								// ����ʡ�Ծ���Ĵ�������ʾ�⣬����һ����Ĭ�����ݵĶ���
								//�Լ�����Ҫ���ǣ�ֱ��ת��ģ���е�Ĭ��ʵ��
					public:
						bool flag = lt->login(lm,new LoginCallback(){ std::string encryptPwd(std::string pwd, LoginTemplate template) { return template::encryptPwd(pwd); } public LoginModel findLoginUser(std::string loginId) { LoginModel lm = new LoginModel(); lm->setLoginId(loginId); lm->setPwd("testpwd"); return lm; } public bool match(LoginModel lm, LoginModel dbLm, LoginTemplate template) { return template::match(lm, dbLm); } });
						puts("���Խ�����ͨ��Ա��¼="+flag);

						//���Թ�����Ա��¼
								//���Ǹ���ķ������ṩ�����ļ���ʵ��
								//�����������м��ܣ�����ʹ�ã�MD5��3DES�ȵȣ�ʡ����
								// ����ʡ�Ծ���Ĵ�������ʾ�⣬����һ����Ĭ�����ݵĶ���
								//�Լ�����Ҫ���ǣ�ֱ��ת��ģ���е�Ĭ��ʵ��
						bool flag2 = lt->login(lm,new LoginCallback(){ std::string encryptPwd(std::string pwd, LoginTemplate template) { puts("ʹ��MD5�����������"); return pwd; } public LoginModel findLoginUser(std::string loginId) { LoginModel lm = new LoginModel(); lm->setLoginId(loginId); lm->setPwd("workerpwd"); return lm; } public bool match(LoginModel lm, LoginModel dbLm, LoginTemplate template) { return template::match(lm, dbLm); } });
						puts("���Ե�¼����ƽ̨="+flag2);
					}
				}
			}
		}
	}
}