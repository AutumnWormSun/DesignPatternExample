#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example6
				{

					void Client::main(std::string args[])
					{
						//���ʼ��ŵĹ����б�
						PayManager *payManager= new PayManager();
						//�ȼ����ٻ�ȡ
						payManager->calcPay();
						puts("���Ź����б�");
						test(payManager->createIterator());
						//�������չ���˾�Ĺ����б�
						SalaryManager *salaryManager = new SalaryManager();
						//�ȼ����ٻ�ȡ
						salaryManager->calcSalary();
						puts("���չ��Ĺ�˾�����б�");
						test(salaryManager->createIterator());
					}

					void Client::test(Iterator *it)
					{
						while(it->hasNext())
						{
							PayModel *pm = static_cast<PayModel*>(it->next());
							puts(pm);
							it++;
						}
					}
				}
			}
		}
	}
}