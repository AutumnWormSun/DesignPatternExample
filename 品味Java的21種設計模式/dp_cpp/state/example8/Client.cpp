#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//����ҵ����󣬲�����ҵ������
						LeaveRequestModel *lrm = new LeaveRequestModel();
						lrm->setUser("С��");
						lrm->setBeginDate("2010-02-08");
						lrm->setLeaveDays(5);

						//���������Ķ���
						LeaveRequestContext *request = new LeaveRequestContext();
						//Ϊ�����Ķ�������ҵ�����ݶ���
						request->setBusinessVO(lrm);
						//���������ģ���Ϊ��ʼ��״̬���Ժ�Ͳ�����
						request->setState(new ProjectManagerState());

						//���������ģ��������Ŀ�ʼ������
						request->doWork();
					}
				}
			}
		}
	}
}