#include "NormalLogin.h"

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

					LoginModel *NormalLogin::findLoginUser(std::string loginId)
					{
						// ����ʡ�Ծ���Ĵ�������ʾ�⣬����һ����Ĭ�����ݵĶ���
						LoginModel *lm = new LoginModel();
						lm->setLoginId(loginId);
						lm->setPwd("testpwd");
						return lm;
					}
				}
			}
		}
	}
}