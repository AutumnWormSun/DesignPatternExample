#include "CommonMessage.h"

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

					CommonMessage::CommonMessage(MessageImplementor *impl) : AbstractMessage(impl)
					{
					}

					void CommonMessage::sendMessage(std::string message, std::string toUser)
					{
						//������ͨ��Ϣ��ʲô�����ɣ�ֱ�ӵ��ø���ķ���������Ϣ���ͳ�ȥ�Ϳ�����
						AbstractMessage::sendMessage(message, toUser);
					}
				}
			}
		}
	}
}