#include "NewsPaper.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example2
				{

					std::string NewsPaper::getContent()
					{
						return content;
					}

					void NewsPaper::setContent(std::string content)
					{
						this->content = content;
						//�������ˣ�˵���ֳ���ֽ�ˣ��Ǿ�֪ͨ���еĶ���
						notifyObservers();
					}
				}
			}
		}
	}
}