#include "WaterQuality.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example5
				{

					int WaterQuality::getPolluteLevel()
					{
						return polluteLevel;
					}

					void WaterQuality::setPolluteLevel(int polluteLevel)
					{
						this->polluteLevel = polluteLevel;
						//֪ͨ��Ӧ�Ĺ۲���
						this->notifyWatchers();
					}

					void WaterQuality::notifyWatchers()
					{
						//ѭ������ע��Ĺ۲���
						for (std::vector<WatcherObserver*>::const_iterator watcher = observers.begin(); watcher != observers.end(); ++watcher)
						{
										//��ʼ������Ⱦ�����ж��Ƿ���Ҫ֪ͨ���������ܿ�
										if(this->polluteLevel >= 0)
										{
											//֪ͨ���Ա����¼
											if((new std::string("�����Ա"))->equals((*watcher)->getJob()))
											{
												(*watcher)->update(this);
											}
										}
										if(this->polluteLevel >= 1)
										{
											//֪ͨԤ����Ա
											if((new std::string("Ԥ����Ա"))->equals((*watcher)->getJob()))
											{
												(*watcher)->update(this);
											}
										}
										if(this->polluteLevel >= 2)
										{
											//֪ͨ��ⲿ���쵼
											if((new std::string("��ⲿ���쵼"))->equals((*watcher)->getJob()))
											{
												(*watcher)->update(this);
											}
										}
						}
					}
				}
			}
		}
	}
}