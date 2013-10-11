#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example7
				{

					void Client::main(std::string args[])
					{
						//�������չ���˾�Ĺ����б�
						SalaryManager *salaryManager = new SalaryManager();
						//�ȼ����ٻ�ȡ
						salaryManager->calcSalary();

						//�õ�˫�������
						Iterator it = salaryManager->createIterator();
						//�������õ���������һ��Ԫ��
						it->first();

						//��nextһ��
						if(!it->isDone())
						{
							PayModel *pm = static_cast<PayModel*>(it->currentItem());
							puts("next1 == "+pm);
							//���µ���һ��
							it->next();
						}
						//Ȼ��previousһ��
						if(!it->isFirst())
						{
							//��ǰ����һ��
							it->previous();
							PayModel *pm = static_cast<PayModel*>(it->currentItem());
							puts("previous1 == "+pm);
						}
						//��nextһ��
						if(!it->isDone())
						{
							PayModel *pm = static_cast<PayModel*>(it->currentItem());
							puts("next2 == "+pm);
							//���µ���һ��
							it->next();
						}
						//����nextһ��
						if(!it->isDone())
						{
							PayModel *pm = static_cast<PayModel*>(it->currentItem());
							puts("next3 == "+pm);
							//���µ���һ��
							it->next();
						}
						//Ȼ��previousһ��
						if(!it->isFirst())
						{
							//��ǰ����һ��
							it->previous();
							PayModel *pm = static_cast<PayModel*>(it->currentItem());
							puts("previous2 == "+pm);
						}

					}
				}
			}
		}
	}
}