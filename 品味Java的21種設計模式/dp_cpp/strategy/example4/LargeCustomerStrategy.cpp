#include "LargeCustomerStrategy.h"

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

					double LargeCustomerStrategy::calcPrice(double goodsPrice)
					{
						puts("���ڴ�ͻ���ͳһ�ۿ�10%");
						return goodsPrice*(1-0.1);
					}
				}
			}
		}
	}
}