#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example9
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
						Collection *col = it->getPage(1,2);
						puts("��һҳ���ݣ�");
						print(col);
						//��ȡ�ڶ�ҳ��ÿҳ��ʾ2��
						Collection *col2 = it->getPage(2,2);
						puts("�ڶ�ҳ���ݣ�");
						print(col2);
						//�ٴλ�ȡ��һҳ
						Collection *col3 = it->getPage(1,2);
						puts("�ٴλ�ȡ��һҳ���ݣ�");
						print(col3);
						//��ȡ����ҳ
						Collection *col4 = it->getPage(3,2);
						puts("��ȡ����ҳ���ݣ�");
						print(col4);
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