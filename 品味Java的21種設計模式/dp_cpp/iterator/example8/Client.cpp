#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example8
				{

					void Client::main(std::string args[])
					{
						//�������չ���˾�Ĺ����б�
						SalaryManager *salaryManager = new SalaryManager();
						//�ȼ����ٻ�ȡ
						salaryManager->calcSalary();
						//�õ���ҳ������
						AggregationIterator *it = salaryManager->createIterator();

						//��ȡ��һҳ��ÿҳ��ʾ2��
						Collection *col = it->next(2);
						puts("��һҳ���ݣ�");
						print(col);
						//��ȡ�ڶ�ҳ��ÿҳ��ʾ2��
						Collection *col2 = it->next(2);
						puts("�ڶ�ҳ���ݣ�");
						print(col2);
						//��ǰһҳ��Ҳ�����ٴλ�ȡ�ڶ�ҳ
						Collection *col3 = it->previous(2);
						puts("�ٴλ�ȡ�ڶ�ҳ���ݣ�");
						print(col3);
					}

					void Client::print(Collection *col)
					{
						Collection::const_iterator it = col->begin();
						while(it != col->end())
						{
							object *obj = *it;
							puts(obj);
							it++;
						}
					}
				}
			}
		}
	}
}