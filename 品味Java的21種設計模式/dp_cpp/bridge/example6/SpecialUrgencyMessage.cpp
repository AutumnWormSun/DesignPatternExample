#include "SpecialUrgencyMessage.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example6
				{

					SpecialUrgencyMessage::SpecialUrgencyMessage(MessageImplementor *impl) : AbstractMessage(impl)
					{
					}

					void SpecialUrgencyMessage::hurry(std::string messageId)
					{
						//ִ�дߴٵ�ҵ�񣬷����ߴٵ���Ϣ
					}

					void SpecialUrgencyMessage::sendMessage(std::string message, std::string toUser)
					{
						message = "�ؼ���"+message;
						AbstractMessage::sendMessage(message, toUser);
						//����Ҫ����һ�����ߴٵ���Ϣ
					}
				}
			}
		}
	}
}