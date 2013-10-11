#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace adapter
			{
				namespace example4
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
						LogFileOperateApi *fileLogApi = new LogFileOperate("");
						LogDbOperateApi *dbLogApi = new LogDbOperate();

						//��������˫�������Ĳ�����־�Ľӿڶ���
						LogFileOperateApi *fileLogApi2 = new TwoDirectAdapter(fileLogApi,dbLogApi);
						LogDbOperateApi *dbLogApi2 = new TwoDirectAdapter(fileLogApi,dbLogApi);

						//�Ȳ��Դ��ļ��������䵽�ڶ��棬��Ȼ���õ��ǵڶ���Ľӿڣ���ʵ���ļ�������ʵ��
						dbLogApi2->createLog(lm1);
						std::vector<LogModel*> allLog = dbLogApi2->getAllLog();
						puts("allLog="+allLog);

						//�ٲ��Դ����ݿ�洢����ɵ�һ��Ľӿڣ�Ҳ���ǵ��õ�һ��Ľӿڣ���ʵ������ʵ��
						fileLogApi2->writeLogFile(list);
						fileLogApi2->readLogFile();
					}
				}
			}
		}
	}
}