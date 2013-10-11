#include "GoodsSaleEbo.h"

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

					bool GoodsSaleEbo::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//���ȫ�������ﴦ��������˳����
						//1��Ȩ�޼��
						//2��ͨ�����ݼ�飨���Ҳ�����ڱ��ֲ��Ѿ������ˣ�
						//3�������߼�У��

						//4��������ҵ����

						//��������ͨ���������������������Ҫ���𹹽���
						SaleSecurityCheck *ssc = new SaleSecurityCheck();
						SaleDataCheck *sdc = new SaleDataCheck();
						SaleLogicCheck *slc = new SaleLogicCheck();
						SaleMgr *sd = new SaleMgr();
						ssc->setSuccessor(sdc);
						sdc->setSuccessor(slc);
						slc->setSuccessor(sd);
						//�����ϵĵ�һ�����󷢳����������
						return ssc->sale(user, customer, saleModel);
					}
				}
			}
		}
	}
}