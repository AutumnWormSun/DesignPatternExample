#include "UrgencyMessageSMS.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example2
				{

					void UrgencyMessageSMS::send(std::string message, std::string toUser)
					{
						message = "�Ӽ���"+message;
						puts("ʹ��վ�ڶ���Ϣ�ķ�ʽ��������Ϣ'"+message+"'��"+toUser);
					}

					object *UrgencyMessageSMS::watch(std::string messageId)
					{
						//��ȡ��Ӧ�����ݣ���֯�ɼ�ص����ݶ���Ȼ�󷵻�		
						return 0;
					}
				}
			}
		}
	}
}