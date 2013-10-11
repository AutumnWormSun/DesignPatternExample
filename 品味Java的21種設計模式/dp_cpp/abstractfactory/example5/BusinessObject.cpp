#include "BusinessObject.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example5
				{

					void BusinessObject::main(std::string args[])
					{
						//����DAO�ĳ��󹤳�
						DAOFactory *df = new RdbDAOFactory();
						//ͨ�����󹤳�����ȡ��Ҫ��DAO�ӿ�
						OrderMainDAO *mainDAO = df->createOrderMainDAO();
						OrderDetailDAO *detailDAO = df->createOrderDetailDAO();
						//����DAO��������ݴ洢�Ĺ���
						mainDAO->saveOrderMain();
						detailDAO->saveOrderDetail();
					}
				}
			}
		}
	}
}