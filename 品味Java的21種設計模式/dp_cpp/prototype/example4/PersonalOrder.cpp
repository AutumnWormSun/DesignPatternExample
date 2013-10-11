#include "PersonalOrder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example4
				{

					int PersonalOrder::getOrderProductNum()
					{
						return this->orderProductNum;
					}

					void PersonalOrder::setOrderProductNum(int num)
					{
						this->orderProductNum = num;
					}

					std::string PersonalOrder::getCustomerName()
					{
						return customerName;
					}

					void PersonalOrder::setCustomerName(std::string customerName)
					{
						this->customerName = customerName;
					}

					std::string PersonalOrder::getProductId()
					{
						return productId;
					}

					void PersonalOrder::setProductId(std::string productId)
					{
						this->productId = productId;
					}

					std::string PersonalOrder::ToString()
					{
						return "�����˶����Ķ�������="+this->customerName+"��������Ʒ��="+this->productId+"����������Ϊ="+this->orderProductNum;
					}

					OrderApi *PersonalOrder::cloneOrder()
					{
						//����һ���µĶ�����Ȼ��ѱ�ʵ�������ݸ��ƹ�ȥ
						PersonalOrder *order = new PersonalOrder();
						order->setCustomerName(this->customerName);
						order->setProductId(this->productId);
						order->setOrderProductNum(this->orderProductNum);

						return order;
					}
				}
			}
		}
	}
}