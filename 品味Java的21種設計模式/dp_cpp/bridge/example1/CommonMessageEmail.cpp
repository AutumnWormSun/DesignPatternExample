#include "CommonMessageEmail.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace bridge
			{
				namespace example1
				{

					void CommonMessageEmail::send(std::string message, std::string toUser)
					{
						puts("ʹ��Email�ķ�ʽ��������Ϣ'"+message+"'��"+toUser);
					}
				}
			}
		}
	}
}