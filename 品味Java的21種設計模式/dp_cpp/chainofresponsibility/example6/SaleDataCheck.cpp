#include "SaleDataCheck.h"

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

					bool SaleDataCheck::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//��������ͨ�ü�飬���鷳�㣬ÿ�����ݶ�Ҫ���
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(user == "" || user.trim()->length()==0)
						{
							puts("�����˲���Ϊ��");
							return false;
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(customer == "" || customer.trim()->length()==0)
						{
							puts("�ͻ�����Ϊ��");
							return false;
						}
						if(saleModel==0)
						{
							puts("������Ʒ�����ݲ���Ϊ��");
							return false;
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(saleModel->getGoods() == "" ||saleModel->getGoods().trim()->length()==0)
						{
							puts("���۵���Ʒ����Ϊ��");
							return false;
						}
						if(saleModel->getSaleNum()==0)
						{
							puts("������Ʒ����������Ϊ0");
							return false;
						}
						//���ͨ��������ļ�⣬�Ǿ����¼���ִ��
						return this->successor->sale(user, customer, saleModel);
					}
				}
			}
		}
	}
}