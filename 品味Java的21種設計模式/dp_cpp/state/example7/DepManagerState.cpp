#include "DepManagerState.h"

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

					void DepManagerState::doWork(StateMachine *request)
					{
						//�Ȱ�ҵ��������ͻ���
						LeaveRequestModel *lrm = static_cast<LeaveRequestModel*>(request->getBusinessVO());

						//ҵ��������˽�����浽���ݿ���

						//���ž�����˹���ֱ��ת����˽���״̬��
						request->setState(new AuditOverState());

						//������������һ�������������쿴��˽��
					}
				}
			}
		}
	}
}