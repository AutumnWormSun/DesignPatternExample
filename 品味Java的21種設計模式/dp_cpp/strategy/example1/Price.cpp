#include "Price.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example1
				{

					double Price::quote(double goodsPrice, std::string customerType)
					{
						if((new std::string("��ͨ�ͻ�"))->equals(customerType))
						{
							puts("�����¿ͻ���������ͨ�ͻ���û���ۿ�");
							return goodsPrice;
						}
						else if((new std::string("�Ͽͻ�"))->equals(customerType))
						{
							puts("�����Ͽͻ���ͳһ�ۿ�5%");
							return goodsPrice*(1-0.05);
						}
						else if((new std::string("��ͻ�"))->equals(customerType))
						{
							puts("���ڴ�ͻ���ͳһ�ۿ�10%");
							return goodsPrice*(1-0.1);
						}
						//������Ա���Ǳ�ԭ��
						return goodsPrice;
					}
				}
			}
		}
	}
}