#include "PredilectionAnalyzeVisitor.h"

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

					void PredilectionAnalyzeVisitor::visitEnterpriseCustomer(EnterpriseCustomer *ec)
					{
						//���ݹ����������ʷ��Ǳ�ڹ�������
						//�Լ��ͻ�������ҵ�ķ�չ���ơ��ͻ��ķ�չԤ�ڵȵķ���
						puts("���ڶ���ҵ�ͻ�"+ec->getName()+"���в�Ʒƫ�÷���");
					}

					void PredilectionAnalyzeVisitor::visitPersonalCustomer(PersonalCustomer *pc)
					{
						puts("���ڶԸ��˿ͻ�"+pc->getName()+"���в�Ʒƫ�÷���");
					}
				}
			}
		}
	}
}