#include "CheckDecorator.h"

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

					CheckDecorator::CheckDecorator(GoodsSaleEbi *ebi) : Decorator(ebi)
					{
					}

					bool CheckDecorator::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//�򵥵㣬ֻ������ִ���������
						if(!(new std::string("����"))->equals(user))
						{
							puts("�Բ���"+user+"����û�б������۵���Ȩ��");
							//�Ͳ��ٵ��ñ�װ�ζ���Ĺ�����
							return false;
						}
						else
						{
							return this->ebi->sale(user, customer, saleModel);
						}
					}
				}
			}
		}
	}
}