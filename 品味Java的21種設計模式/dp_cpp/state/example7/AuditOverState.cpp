#include "AuditOverState.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example7
				{

					void AuditOverState::doWork(StateMachine *request)
					{
						//�Ȱ�ҵ��������ͻ���
						LeaveRequestModel *lrm = static_cast<LeaveRequestModel*>(request->getBusinessVO());

						//ҵ���������������¼�������̽���		
					}
				}
			}
		}
	}
}