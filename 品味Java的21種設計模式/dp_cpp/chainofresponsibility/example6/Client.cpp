#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//����ҵ�����
						GoodsSaleEbo *ebo = new GoodsSaleEbo();
						//׼����������
						SaleModel *saleModel = new SaleModel();
						saleModel->setGoods("��ѧ�ѻ��ɾ���");
						saleModel->setSaleNum(10);

						//����ҵ����
						ebo->sale("С��", "����", saleModel);
						ebo->sale("С��", "����", saleModel);
					}
				}
			}
		}
	}
}