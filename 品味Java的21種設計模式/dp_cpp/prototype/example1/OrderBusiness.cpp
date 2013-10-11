#include "OrderBusiness.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example1
				{

					void OrderBusiness::saveOrder(OrderApi *order)
					{
						//����ҵ��Ҫ�󣬵�������Ԥ���Ĳ�Ʒ��������1000��ʱ�򣬾���Ҫ�Ѷ���������ݶ���
						//��Ȼ���Ҫ���ã������1000Ӧ�����ɳ�������ô����Ϊ����ʾ��

						//1���жϵ�ǰ��Ԥ����Ʒ�����Ƿ����1000
						while(order->getOrderProductNum() > 1000)
						{
							//2��������ڣ�����Ҫ�������
							//2.1���½�һ�ݶ�����������Ķ�������������һ���⣬��������ͬ
							OrderApi *newOrder = 0;
							if(dynamic_cast<PersonalOrder*>(order) != 0)
							{
								//������Ӧ���µĶ�������
								PersonalOrder *p2 = new PersonalOrder();
								//Ȼ����и�ֵ�����ǲ�Ʒ����Ϊ1000
								PersonalOrder *p1 = static_cast<PersonalOrder*>(order);
								p2->setCustomerName(p1->getCustomerName());
								p2->setProductId(p1->getProductId());
								p2->setOrderProductNum(1000);
								//Ȼ�������ø�newOrder
								newOrder = p2;
							}
							else if(dynamic_cast<EnterpriseOrder*>(order) != 0)
							{
								//������Ӧ�Ķ�������
								EnterpriseOrder *e2 = new EnterpriseOrder();
								//Ȼ����и�ֵ�����ǲ�Ʒ����Ϊ1000
								EnterpriseOrder *e1 = static_cast<EnterpriseOrder*>(order);
								e2->setEnterpriseName(e1->getEnterpriseName());
								e2->setProductId(e1->getProductId());
								e2->setOrderProductNum(1000);
								//Ȼ�������ø�newOrder
								newOrder = e2;
							}

							//2.2ԭ���Ķ������������������óɼ���1000
							order->setOrderProductNum(order->getOrderProductNum()-1000);

							//Ȼ����ҵ���ܴ���ʡ���ˣ���ӡ�������һ��
							puts("������ɶ���=="+newOrder);
						}

						//3�����������Ǿ�ֱ��ҵ���ܴ���ʡ���ˣ���ӡ�������һ��
						puts("����=="+order);

					}
				}
			}
		}
	}
}