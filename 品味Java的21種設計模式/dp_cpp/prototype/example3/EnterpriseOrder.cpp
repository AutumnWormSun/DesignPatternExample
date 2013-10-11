#include "EnterpriseOrder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example3
				{

					int EnterpriseOrder::getOrderProductNum()
					{
						return this->orderProductNum;
					}

					void EnterpriseOrder::setOrderProductNum(int num)
					{
						this->orderProductNum = num;
					}

					std::string EnterpriseOrder::getEnterpriseName()
					{
						return enterpriseName;
					}

					void EnterpriseOrder::setEnterpriseName(std::string enterpriseName)
					{
						this->enterpriseName = enterpriseName;
					}

					std::string EnterpriseOrder::getProductId()
					{
						return productId;
					}

					void EnterpriseOrder::setProductId(std::string productId)
					{
						this->productId = productId;
					}

					std::string EnterpriseOrder::ToString()
					{
						return "����ҵ�����Ķ�����ҵ��="+this->enterpriseName+"��������Ʒ��="+this->productId+"����������Ϊ="+this->orderProductNum;
					}

					OrderApi *EnterpriseOrder::cloneOrder()
					{
						//����һ���µĶ�����Ȼ��ѱ�ʵ�������ݸ��ƹ�ȥ
						EnterpriseOrder *order = new EnterpriseOrder();
						order->setEnterpriseName(this->enterpriseName);
						order->setProductId(this->productId);
						order->setOrderProductNum(this->orderProductNum);

						return order;
					}
				}
			}
		}
	}
}