#include "OrderClient.h"

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

					void OrderClient::main(std::string args[])
					{
						//����������������Ϊ����ʾ�򵥣�ֱ��new��
						PersonalOrder *op = new PersonalOrder();
						//���ö�������
						op->setOrderProductNum(2925);
						op->setCustomerName("����");
						op->setProductId("P0001");

						//�����ȡҵ������࣬Ҳֱ��new�ˣ�Ϊ�˼򵥣���ҵ��ӿڶ�û����
						OrderBusiness *ob = new OrderBusiness();
						//����ҵ�������涩������
						ob->saveOrder(op);
					}
				}
			}
		}
	}
}