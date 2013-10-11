#include "WorthAnalyzeVisitor.h"

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

					void WorthAnalyzeVisitor::visitEnterpriseCustomer(EnterpriseCustomer *ec)
					{
						//���ݹ���Ľ���С������Ĳ�Ʒ�ͷ���Ķ��١������Ƶ�ʵȽ��з���
						//��ҵ�ͻ��ı�׼��ȸ��˿ͻ��ĸ�
						puts("���ڶ���ҵ�ͻ�"+ec->getName()+"���м�ֵ����");
					}

					void WorthAnalyzeVisitor::visitPersonalCustomer(PersonalCustomer *pc)
					{
						puts("���ڶԸ��˿ͻ�"+pc->getName()+"���м�ֵ����");
					}
				}
			}
		}
	}
}