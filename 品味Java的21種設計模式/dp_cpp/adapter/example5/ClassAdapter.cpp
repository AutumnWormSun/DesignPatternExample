#include "ClassAdapter.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace adapter
			{
				namespace example5
				{

					ClassAdapter::ClassAdapter(std::string logFilePathName) : LogFileOperate(logFilePathName)
					{
					}

					void ClassAdapter::createLog(LogModel *lm)
					{
						//1���ȶ�ȡ�ļ�������
						std::vector<LogModel*> list = this->readLogFile();
						//2�������µ���־����
						list.push_back(lm);
						//3������д���ļ�
						this->writeLogFile(list);
					}

					std::vector<LogModel*> ClassAdapter::getAllLog()
					{
						return this->readLogFile();
					}

					void ClassAdapter::removeLog(LogModel *lm)
					{
						//1���ȶ�ȡ�ļ�������
						std::vector<LogModel*> list = this->readLogFile();
						//2��ɾ����Ӧ����־����
						list.remove(lm);
						//3������д���ļ�
						this->writeLogFile(list);
					}

					void ClassAdapter::updateLog(LogModel *lm)
					{
						//1���ȶ�ȡ�ļ�������
						std::vector<LogModel*> list = this->readLogFile();
						//2���޸���Ӧ����־����
						for(int i=0;i<list.size();i++)
						{
							if(list.at(i)->getLogId()->equals(lm->getLogId()))
							{
								list.set(i, lm);
								break;
							}
						}
						//3������д���ļ�
						this->writeLogFile(list);
					}
				}
			}
		}
	}
}