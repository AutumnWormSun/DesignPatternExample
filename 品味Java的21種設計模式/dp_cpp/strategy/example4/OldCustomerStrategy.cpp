#include "OldCustomerStrategy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example4
				{

					double OldCustomerStrategy::calcPrice(double goodsPrice)
					{
						puts("�����Ͽͻ���ͳһ�ۿ�5%");
						return goodsPrice*(1-0.05);
					}
				}
			}
		}
	}
}