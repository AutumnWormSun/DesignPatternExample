#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
						//���ʼ��ŵĹ����б�
						PayManager *payManager= new PayManager();
						//�ȼ����ٻ�ȡ
						payManager->calcPay();
						Collection *payList = payManager->getPayList();
						Collection::const_iterator it = payList->begin();
						puts("���Ź����б�");
						while(it != payList->end())
						{
							PayModel *pm = static_cast<PayModel*>(*it);
							puts(pm);
							it++;
						}

						//�������չ���˾�Ĺ����б�
						SalaryManager *salaryManager = new SalaryManager();
						//�ȼ����ٻ�ȡ
						salaryManager->calcSalary();
//ORIGINAL LINE: PayModel[] pms = salaryManager.getPays();
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						PayModel *pms = salaryManager->getPays();
						puts("���չ��Ĺ�˾�����б�");
						for(int i=0;i<sizeof(pms) / sizeof(pms[0]);i++)
						{
							puts(pms[i]);
						}
					}
				}
			}
		}
	}
}