#include "SalaryManager.h"

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

					PayModel *SalaryManager::getPays()
					{
						return pms;
					}

					void SalaryManager::calcSalary()
					{
						//���㹤�ʣ����ѹ�����Ϣ��䵽�����б�����
						//Ϊ�˲��ԣ���������ݽ�ȥ
						PayModel *pm1 = new PayModel();
						pm1->setPay(2200);
						pm1->setUserName("����");

						PayModel *pm2 = new PayModel();
						pm2->setPay(3600);
						pm2->setUserName("����");

						pms = new PayModel[2];
						pms[0] = pm1;
						pms[1] = pm2;
					}
				}
			}
		}
	}
}