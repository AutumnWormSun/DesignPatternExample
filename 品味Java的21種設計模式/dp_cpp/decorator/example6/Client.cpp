#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//�õ�ҵ��ӿ�,���װ����
						GoodsSaleEbi *ebi = new CheckDecorator(new LogDecorator(new GoodsSaleEbo()));
						//׼����������
						SaleModel *saleModel = new SaleModel();
						saleModel->setGoods("Moto�ֻ�");
						saleModel->setSaleNum(2);
						//����ҵ����
						ebi->sale("����","������", saleModel);
						ebi->sale("����","������", saleModel);
					}
				}
			}
		}
	}
}