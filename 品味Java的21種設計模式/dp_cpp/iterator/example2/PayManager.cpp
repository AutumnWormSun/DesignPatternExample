#include "PayManager.h"

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

					std::vector PayManager::getPayList()
					{
						return list;
					}

					void PayManager::calcPay()
					{
						//���㹤�ʣ����ѹ�����Ϣ��䵽�����б�����
						//Ϊ�˲��ԣ���������ݽ�ȥ
						PayModel *pm1 = new PayModel();
						pm1->setPay(3800);
						pm1->setUserName("����");

						PayModel *pm2 = new PayModel();
						pm2->setPay(5800);
						pm2->setUserName("����");

						list.push_back(pm1);
						list.push_back(pm2);
					}
				}
			}
		}
	}
}