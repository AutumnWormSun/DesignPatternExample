#include "VideoCard.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example2
				{

					VideoCard::VideoCard(Mediator *mediator) : Colleague(mediator)
					{
					}

					void VideoCard::showData(std::string data)
					{
						puts("�����ۿ����ǣ�"+data);
					}
				}
			}
		}
	}
}