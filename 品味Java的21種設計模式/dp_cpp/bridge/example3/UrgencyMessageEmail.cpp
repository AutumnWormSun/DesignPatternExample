#include "UrgencyMessageEmail.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example3
				{

					void UrgencyMessageEmail::send(std::string message, std::string toUser)
					{
						message = "�Ӽ���"+message;
						puts("ʹ��Email�ķ�ʽ��������Ϣ'"+message+"'��"+toUser);
					}

					object *UrgencyMessageEmail::watch(std::string messageId)
					{
						//��ȡ��Ӧ�����ݣ���֯�ɼ�ص����ݶ���Ȼ�󷵻�		
						return 0;
					}
				}
			}
		}
	}
}