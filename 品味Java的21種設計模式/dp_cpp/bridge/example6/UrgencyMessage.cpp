#include "UrgencyMessage.h"

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

					UrgencyMessage::UrgencyMessage(MessageImplementor *impl) : AbstractMessage(impl)
					{
					}

					void UrgencyMessage::sendMessage(std::string message, std::string toUser)
					{
						message = "�Ӽ���"+message;
						AbstractMessage::sendMessage(message, toUser);
					}

					object *UrgencyMessage::watch(std::string messageId)
					{
						//��ȡ��Ӧ�����ݣ���֯�ɼ�ص����ݶ���Ȼ�󷵻�		
						return 0;
					}
				}
			}
		}
	}
}