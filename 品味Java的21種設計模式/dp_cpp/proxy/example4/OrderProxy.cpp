#include "OrderProxy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example4
				{

					OrderProxy::OrderProxy(Order *realSubject)
					{
						this->order = realSubject;
					}

					void OrderProxy::setProductName(std::string productName, std::string user)
					{
						//���Ʒ���Ȩ�ޣ�ֻ�д�����������Ա���ܹ��޸�
						if(user!="" && user.equals(this->getOrderUser()))
						{
							order->setProductName(productName, user);
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
							order->setOrderNum(orderNum, user);
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
							order->setOrderUser(orderUser, user);
						}
						else
						{
							puts("�Բ���"+user+"������Ȩ�޸Ķ����еĶ����ˡ�");
						}
					}

					int OrderProxy::getOrderNum()
					{
						return this->order->getOrderNum();
					}

					std::string OrderProxy::getOrderUser()
					{
						return this->order->getOrderUser();
					}

					std::string OrderProxy::getProductName()
					{
						return this->order->getProductName();
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