#include "Price.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example2
				{

					double Price::quote(double goodsPrice, std::string customerType)
					{
						if((new std::string("��ͨ�ͻ�"))->equals(customerType))
						{
							return this->calcPriceForNormal(goodsPrice);
						}
						else if((new std::string("�Ͽͻ�"))->equals(customerType))
						{
							return this->calcPriceForOld(goodsPrice);
						}
						else if((new std::string("��ͻ�"))->equals(customerType))
						{
							return this->calcPriceForLarge(goodsPrice);
						}
						//������Ա���Ǳ�ԭ��
						return goodsPrice;
					}

					double Price::calcPriceForNormal(double goodsPrice)
					{
						puts("�����¿ͻ���������ͨ�ͻ���û���ۿ�");
						return goodsPrice;
					}

					double Price::calcPriceForOld(double goodsPrice)
					{
						puts("�����Ͽͻ���ͳһ�ۿ�5%");
						return goodsPrice*(1-0.05);
					}

					double Price::calcPriceForLarge(double goodsPrice)
					{
						puts("���ڴ�ͻ���ͳһ�ۿ�10%");
						return goodsPrice*(1-0.1);
					}
				}
			}
		}
	}
}