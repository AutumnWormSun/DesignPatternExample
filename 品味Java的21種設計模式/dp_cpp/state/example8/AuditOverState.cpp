#include "AuditOverState.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example8
				{

					void AuditOverState::doWork(StateMachine *request)
					{
						//�Ȱ�ҵ��������ͻ���
						LeaveRequestModel *lrm = static_cast<LeaveRequestModel*>(request->getBusinessVO());
						puts(lrm->getUser()+"�������������Ѿ���˽���������ǣ�"+lrm->getResult());
					}
				}
			}
		}
	}
}