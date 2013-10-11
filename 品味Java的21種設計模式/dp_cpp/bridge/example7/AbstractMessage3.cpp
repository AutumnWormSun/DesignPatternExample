#include "AbstractMessage3.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example7
				{

					AbstractMessage3::AbstractMessage3()
					{
						//����һ��Ĭ�ϵ�ʵ��
						this->impl = new MessageSMS();
					}

					void AbstractMessage3::sendMessage(std::string message, std::string toUser)
					{
						this->impl->send(message, toUser);
					}
				}
			}
		}
	}
}