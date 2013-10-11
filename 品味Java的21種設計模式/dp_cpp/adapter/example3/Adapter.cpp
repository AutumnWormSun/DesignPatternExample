#include "Adapter.h"

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

					Adapter::Adapter(LogFileOperateApi *adaptee)
					{
						this->adaptee = adaptee;
					}

					void Adapter::createLog(LogModel *lm)
					{
						//1���ȶ�ȡ�ļ�������
						std::vector<LogModel*> list = adaptee->readLogFile();
						//2�������µ���־����
						list.push_back(lm);
						//3������д���ļ�
						adaptee->writeLogFile(list);
					}

					std::vector<LogModel*> Adapter::getAllLog()
					{
						return adaptee->readLogFile();
					}

					void Adapter::removeLog(LogModel *lm)
					{
						//1���ȶ�ȡ�ļ�������
						std::vector<LogModel*> list = adaptee->readLogFile();
						//2��ɾ����Ӧ����־����
						list.remove(lm);
						//3������д���ļ�
						adaptee->writeLogFile(list);
					}

					void Adapter::updateLog(LogModel *lm)
					{
						//1���ȶ�ȡ�ļ�������
						std::vector<LogModel*> list = adaptee->readLogFile();
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
						adaptee->writeLogFile(list);
					}
				}
			}
		}
	}
}