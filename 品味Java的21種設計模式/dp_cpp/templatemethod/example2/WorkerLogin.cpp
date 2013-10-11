#include "WorkerLogin.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example2
				{

					bool WorkerLogin::login(LoginModel *lm)
					{
						//1�����ݹ�����Ա���ȥ��ȡ������Ա������
						WorkerModel *wm = this->findWorkerByWorkerId(lm->getWorkerId());
						//2���жϴ�ǰ̨���ݹ������û����ͼ��ܺ���������ݣ������ݿ������е������Ƿ�ƥ��
						//���жϹ�����Ա�Ƿ���ڣ����wmΪnull��˵��������Ա�϶�������
						//���ǲ�Ϊnull��������Ա��һ�����ڣ�
						//��Ϊ���ݲ���ܷ���new WorkerModel();��˻���Ҫ����һ�����ж�
						if (wm != 0)
						{
							//3���Ѵ�ǰ̨�������������ݣ�ʹ����Ӧ�ļ����㷨���м�������
							std::string encryptPwd = this->encryptPwd(lm->getPwd());
							//���������Ա���ڣ���鹤����Ա��ź������Ƿ�ƥ��
							if (wm->getWorkerId().equals(lm->getWorkerId()) && wm->getPwd().equals(encryptPwd))
							{
								return true;
							}
						}
						return false;
					}

					std::string WorkerLogin::encryptPwd(std::string pwd)
					{
						//�����������м��ܣ�ʡ����
						return pwd;
					}

					WorkerModel *WorkerLogin::findWorkerByWorkerId(std::string workerId)
					{
						// ����ʡ�Ծ���Ĵ�������ʾ�⣬����һ����Ĭ�����ݵĶ���
						WorkerModel *wm = new WorkerModel();
						wm->setWorkerId(workerId);
						wm->setName("Worker1");
						wm->setPwd("worker1");
						wm->setUuid("Worker0001");
						return wm;
					}
				}
			}
		}
	}
}