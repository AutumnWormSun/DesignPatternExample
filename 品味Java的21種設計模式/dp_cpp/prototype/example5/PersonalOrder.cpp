#include "PersonalOrder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example5
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

					object *PersonalOrder::clone()
					{
						//��¡����������ʵ�֣�ֱ�ӵ��ø���Ŀ�¡�����Ϳ�����
						object *obj = 0;
						try
						{
							obj = __super::clone();
						}
						catch (CloneNotSupportedException *e)
						{
							e->printStackTrace();
						}
						return obj;
					}
				}
			}
		}
	}
}