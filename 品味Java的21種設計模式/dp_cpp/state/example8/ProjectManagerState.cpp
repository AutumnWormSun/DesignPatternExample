#include "ProjectManagerState.h"

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

					void ProjectManagerState::doWork(StateMachine *request)
					{
						//�Ȱ�ҵ��������ͻ���
						LeaveRequestModel *lrm = static_cast<LeaveRequestModel*>(request->getBusinessVO());

						puts("��Ŀ��������У����Ժ�......");

						//ģ���û�������棬ͨ������̨����ȡ����
						puts(lrm->getUser()+"�����"+lrm->getBeginDate()+ "��ʼ���"+lrm->getLeaveDays()+"��,����Ŀ�������(1Ϊͬ�⣬2Ϊ��ͬ��)��");
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
							lrm->setResult("��Ŀ������˽����"+result);
							//����ѡ��Ľ����������������һ��
							if(a==1)
							{
								if(lrm->getLeaveDays() > 3)
								{
									//��������������3�죬������Ŀ����ͬ���ˣ����ύ�����ž���
									request->setState(new DepManagerState());
									//����ִ����һ������
									request->doWork();
								}
								else
								{
									//3�����ڵ���٣�����Ŀ��������,�Ͳ����ύ�����ž����ˣ�ת����˽���״̬
									request->setState(new AuditOverState());
									//����ִ����һ������
									request->doWork();
								}
							}
							else
							{
								//��Ŀ����Ҫ�ǲ�ͬ��Ļ���Ҳ�Ͳ����ύ�����ž����ˣ�ת����˽���״̬
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
}