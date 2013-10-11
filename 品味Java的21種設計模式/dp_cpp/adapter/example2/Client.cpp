#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace adapter
			{
				namespace example2
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
						LogFileOperateApi *api = new LogFileOperate("");
						//������־�ļ�
						api->writeLogFile(list);

						//��ȡ��־�ļ�������
						std::vector<LogModel*> readLog = api->readLogFile();
						puts("readLog="+readLog);
					}
				}
			}
		}
	}
}