#include "Watcher.h"

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

					void Watcher::update(WaterQualitySubject *subject)
					{
						//������õ������ķ�ʽ
						puts(job+"��ȡ��֪ͨ����ǰ��Ⱦ����Ϊ��"+subject->getPolluteLevel());
					}

					std::string Watcher::getJob()
					{
						return this->job;
					}

					void Watcher::setJob(std::string job)
					{
						this->job = job;
					}
				}
			}
		}
	}
}