#include "PersonalOrder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example6
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

					Product *PersonalOrder::getProduct()
					{
						return product;
					}

					void PersonalOrder::setProduct(Product *product)
					{
						this->product = product;
					}

					std::string PersonalOrder::ToString()
					{
						//�򵥵����
						return "������Ʒ��="+this->product->getName()+"����������Ϊ="+this->orderProductNum;
					}

					OrderApi *PersonalOrder::cloneOrder()
					{
						//����һ���µĶ�����Ȼ��ѱ�ʵ�������ݸ��ƹ�ȥ
						PersonalOrder *order = new PersonalOrder();
						order->setCustomerName(this->customerName);
						order->setOrderProductNum(this->orderProductNum);
						//���ڶ������͵����ݣ���ȿ�¡��ʱ����Ҫ���������������Ŀ�¡����
						order->setProduct(static_cast<Product*>(this->product->cloneProduct()));
						return order;
					}
				}
			}
		}
	}
}