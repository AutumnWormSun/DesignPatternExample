#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example3
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
						//ѭ������ۺ϶����е�ֵ
						//�������õ���������һ��Ԫ��
						it->first();
						while(!it->isDone())
						{
							//ȡ����ǰ��Ԫ����
							object *obj = it->currentItem();
							puts("the obj=="+obj);
							//�����û�е����������ô�����µ���һ��
							it->next();
						}
					}
				}
			}
		}
	}
}