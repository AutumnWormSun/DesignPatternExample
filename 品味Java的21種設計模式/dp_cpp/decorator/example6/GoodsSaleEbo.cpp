#include "GoodsSaleEbo.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example6
				{

					bool GoodsSaleEbo::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						puts(user+"������"+customer+"���� "+saleModel+" ����������");
						return true;
					}
				}
			}
		}
	}
}