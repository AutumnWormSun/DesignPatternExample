#include "ServiceRequestVisitor.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example4
				{

					void ServiceRequestVisitor::visitEnterpriseCustomer(EnterpriseCustomer *ec)
					{
						//��ҵ�ͻ�����ľ����������
						puts(ec->getName()+"��ҵ�����������");
					}

					void ServiceRequestVisitor::visitPersonalCustomer(PersonalCustomer *pc)
					{
						//���˿ͻ�����ľ����������
						puts("�ͻ�"+pc->getName()+"�����������");
					}
				}
			}
		}
	}
}