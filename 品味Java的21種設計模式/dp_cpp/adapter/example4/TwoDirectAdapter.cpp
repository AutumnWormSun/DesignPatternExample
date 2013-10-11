#include "TwoDirectAdapter.h"

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

					TwoDirectAdapter::TwoDirectAdapter(LogFileOperateApi *fileLog, LogDbOperateApi *dbLog)
					{
						this->fileLog = fileLog;
						this->dbLog = dbLog;
					}

					void TwoDirectAdapter::createLog(LogModel *lm)
					{
						//1���ȶ�ȡ�ļ�������
						std::vector<LogModel*> list = fileLog->readLogFile();
						//2�������µ���־����
						list.push_back(lm);
						//3������д���ļ�
						fileLog->writeLogFile(list);
					}

					std::vector<LogModel*> TwoDirectAdapter::getAllLog()
					{
						return fileLog->readLogFile();
					}

					void TwoDirectAdapter::removeLog(LogModel *lm)
					{
						//1���ȶ�ȡ�ļ�������
						std::vector<LogModel*> list = fileLog->readLogFile();
						//2��ɾ����Ӧ����־����
						list.remove(lm);
						//3������д���ļ�
						fileLog->writeLogFile(list);
					}

					void TwoDirectAdapter::updateLog(LogModel *lm)
					{
						//1���ȶ�ȡ�ļ�������
						std::vector<LogModel*> list = fileLog->readLogFile();
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
						fileLog->writeLogFile(list);
					}

					std::vector<LogModel*> TwoDirectAdapter::readLogFile()
					{
						return dbLog->getAllLog();
					}

					void TwoDirectAdapter::writeLogFile(std::vector<LogModel*> &list)
					{
						//1����򵥵�ʵ��˼·����ɾ�����ݿ��е�����
						//2��Ȼ��ѭ�������ڵ����ݼ��뵽���ݿ���
						for (std::vector<LogModel*>::const_iterator lm = list.begin(); lm != list.end(); ++lm)
						{
							dbLog->createLog(*lm);
						}
					}
				}
			}
		}
	}
}