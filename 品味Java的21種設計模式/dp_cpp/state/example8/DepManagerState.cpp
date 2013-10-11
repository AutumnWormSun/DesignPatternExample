#include "DepManagerState.h"

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

					void DepManagerState::doWork(StateMachine *request)
					{
						//�Ȱ�ҵ��������ͻ���
						LeaveRequestModel *lrm = static_cast<LeaveRequestModel*>(request->getBusinessVO());
						puts("���ž�������У����Ժ�......");

						//ģ���û�������棬ͨ������̨����ȡ����
						puts(lrm->getUser()+"�����"+lrm->getBeginDate()+ "��ʼ���"+lrm->getLeaveDays()+"��,�벿�ž������(1Ϊͬ�⣬2Ϊ��ͬ��)��");
						//��ȡ�ӿ���̨���������
						Scanner *scanner = new Scanner(System::in);
						if(scanner->hasNext())
						{
							int a = scanner->nextInt();
							//���ûص���������
							std::string result = "��ͬ��";
							if(a==1)
							{
								result = "ͬ��";
							}
							lrm->setResult("���ž�����˽����"+result);
							//���ž�����˹���ֱ��ת����˽���״̬��
							request->setState(new AuditOverState());
							//����ִ����һ������
							request->doWork();
						}
					}
				}
			}
		}
	}
}