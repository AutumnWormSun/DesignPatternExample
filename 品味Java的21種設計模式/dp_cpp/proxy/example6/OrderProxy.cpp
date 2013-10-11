#include "OrderProxy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example6
				{

					OrderProxy::OrderProxy(std::string productName, int orderNum, std::string orderUser) : Order(productName,orderNum,orderUser)
					{
					}

					void OrderProxy::setProductName(std::string productName, std::string user)
					{
						//���Ʒ���Ȩ�ޣ�ֻ�д�����������Ա���ܹ��޸�
						if(user!="" && user.equals(this->getOrderUser()))
						{
							Order::setProductName(productName, user);
						}
						else
						{
							puts("�Բ���"+user+"������Ȩ�޸Ķ����еĲ�Ʒ���ơ�");
						}
					}

					void OrderProxy::setOrderNum(int orderNum, std::string user)
					{
						//���Ʒ���Ȩ�ޣ�ֻ�д�����������Ա���ܹ��޸�
						if(user!="" && user.equals(this->getOrderUser()))
						{
							Order::setOrderNum(orderNum, user);
						}
						else
						{
							puts("�Բ���"+user+"������Ȩ�޸Ķ����еĶ���������");
						}
					}

					void OrderProxy::setOrderUser(std::string orderUser, std::string user)
					{
						//���Ʒ���Ȩ�ޣ�ֻ�д�����������Ա���ܹ��޸�
						if(user!="" && user.equals(this->getOrderUser()))
						{
							Order::setOrderUser(orderUser, user);
						}
						else
						{
							puts("�Բ���"+user+"������Ȩ�޸Ķ����еĶ����ˡ�");
						}
					}

					std::string OrderProxy::ToString()
					{
						return "productName="+this->getProductName()+",orderNum="+this->getOrderNum()+",orderUser="+this->getOrderUser();
					}
				}
			}
		}
	}
}