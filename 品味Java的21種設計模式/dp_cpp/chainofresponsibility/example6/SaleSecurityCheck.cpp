#include "SaleSecurityCheck.h"

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

					bool SaleSecurityCheck::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//����Ȩ�޼�飬�򵥵㣬��С����ͨ��
						if((new std::string("С��"))->equals(user))
						{
							return this->successor->sale(user, customer, saleModel);
						}
						else
						{
							puts("�Բ���"+user+"����û�б���������Ϣ��Ȩ��");
							return false;
						}
					}
				}
			}
		}
	}
}