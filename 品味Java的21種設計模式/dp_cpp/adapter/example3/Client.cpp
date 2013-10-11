#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace adapter
			{
				namespace example3
				{

					void Client::main(std::string args[])
					{
						//׼����־���ݣ�Ҳ���ǲ��Ե�����
						LogModel *lm1 = new LogModel();
						lm1->setLogId("001");
						lm1->setOperateUser("admin");
						lm1->setOperateTime("2010-03-02 10:08:18");
						lm1->setLogContent("����һ������");

						std::vector<LogModel*> list = std::vector<LogModel*>();
						list.push_back(lm1);

						//����������־�ļ��Ķ���
						LogFileOperateApi *logFileApi = new LogFileOperate("");

						//�����°�Ĳ�����־�Ľӿڶ���
						LogDbOperateApi *api = new Adapter(logFileApi);

						//������־�ļ�
						api->createLog(lm1);

						//��ȡ��־�ļ�������
						std::vector<LogModel*> allLog = api->getAllLog();
						puts("allLog="+allLog);
					}
				}
			}
		}
	}
}