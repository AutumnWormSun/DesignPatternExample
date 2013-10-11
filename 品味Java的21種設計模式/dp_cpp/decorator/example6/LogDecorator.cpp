#include "LogDecorator.h"

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

					LogDecorator::LogDecorator(GoodsSaleEbi *ebi) : Decorator(ebi)
					{
					}

					bool LogDecorator::sale(std::string user, std::string customer, SaleModel *saleModel)
					{
						//ִ��ҵ����
						bool f = this->ebi->sale(user, customer, saleModel);
						//��ִ��ҵ���ܹ��󣬼�¼��־
						DateFormat *df = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss SSS");
						puts("��־��¼��"+user+"��"+df->format(new Date())+"ʱ������һ�����ۼ�¼���ͻ���"+customer+",�����¼��"+saleModel);
						return f;
					}
				}
			}
		}
	}
}