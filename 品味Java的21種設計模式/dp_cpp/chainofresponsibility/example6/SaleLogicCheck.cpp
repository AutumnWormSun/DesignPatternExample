#include "SaleLogicCheck.h"

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

					bool SaleLogicCheck::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//�������ݵ��߼���飬������ID��Ψһ�ԣ�������Ķ�Ӧ��ϵ�ȵ�
						//����Ӧ�ü������������Ķ�Ӧ��ϵ������������Ʒ�Ƿ����
						//Ϊ����ʾ�򵥣�ֱ��ͨ����

						//���ͨ��������ļ�⣬�Ǿ����¼���ִ��
						return this->successor->sale(user, customer, saleModel);
					}
				}
			}
		}
	}
}