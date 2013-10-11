#include "ProjectManagerState.h"

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

					void ProjectManagerState::doWork(StateMachine *request)
					{
						//�Ȱ�ҵ��������ͻ���
						LeaveRequestModel *lrm = static_cast<LeaveRequestModel*>(request->getBusinessVO());

						//ҵ��������˽�����浽���ݿ���

						//����ѡ��Ľ����������������һ��
						if((new std::string("ͬ��"))->equals(lrm->getResult()))
						{
							if(lrm->getLeaveDays() > 3)
							{
								//��������������3�죬������Ŀ����ͬ���ˣ����ύ�����ž���
								request->setState(new DepManagerState());

								//Ϊ���ž�������һ������				
							}
							else
							{
								//3�����ڵ���٣�����Ŀ��������,�Ͳ����ύ�����ž����ˣ�ת����˽���״̬
								request->setState(new AuditOverState());

								//������������һ�������������쿴��˽��
							}
						}
						else
						{
							//��Ŀ����Ҫ�ǲ�ͬ��Ļ���Ҳ�Ͳ����ύ�����ž����ˣ�ת����˽���״̬
							request->setState(new AuditOverState());

							//������������һ�������������쿴��˽��
						}
					}
				}
			}
		}
	}
}