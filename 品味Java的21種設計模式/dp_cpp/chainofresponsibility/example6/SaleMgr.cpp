#include "SaleMgr.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example6
				{

					bool SaleMgr::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//����������ҵ���߼�����
						puts(user+"������"+customer+"���� "+saleModel+" ����������");
						return true;
					}
				}
			}
		}
	}
}