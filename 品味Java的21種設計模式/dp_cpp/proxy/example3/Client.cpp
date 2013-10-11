#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example3
				{

					void Client::main(std::string args[]) throw(Exception)
					{
						UserManager *userManager = new UserManager();
						Collection<UserModelApi*> *col = userManager->getUserByDepId("0101");

						//���ֻ����ʾ�û����ƣ���ô����Ҫ���²�ѯ���ݿ�
						for (Collection<UserModelApi*>::const_iterator umApi = col->begin(); umApi != col->end(); ++umApi)
						{
							puts("�û���ţ�="+(*umApi)->getUserId()+",�û�������="+(*umApi)->getName());
						}
						//������ʷ��û���ź��û�����������ԣ��Ǿͻ����²�ѯ���ݿ�
						for (Collection<UserModelApi*>::const_iterator umApi = col->begin(); umApi != col->end(); ++umApi)
						{
							puts("�û���ţ�="+(*umApi)->getUserId()+",�û�������="+(*umApi)->getName()+",�������ţ�="+(*umApi)->getDepId());
						}
					}
				}
			}
		}
	}
}