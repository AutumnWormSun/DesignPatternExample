#include "AbstractMessage2.h"

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

					MessageImplementor *AbstractMessage2::getImpl(std::string message)
					{
						MessageImplementor *impl = 0;
						if(message == "")
						{
							//���û����Ϣ��Ĭ��ʹ��վ�ڶ���Ϣ
							impl = new MessageSMS();
						}
						else if(message.length()< 100)
						{
							//�����Ϣ������100���ڣ�ʹ���ֻ�����Ϣ
							impl = new MessageMobile();
						}
						else if(message.length()<1000)
						{
							//�����Ϣ������100-1000���ڣ�ʹ��վ�ڶ���Ϣ
							impl = new MessageSMS();
						}
						else
						{
							//�����Ϣ������1000����
							impl = new MessageEmail();
						}
						return impl;
					}

					AbstractMessage2::AbstractMessage2()
					{
						//����ʲô��������
					}

					void AbstractMessage2::sendMessage(std::string message, std::string toUser)
					{
						this->getImpl(message)->send(message, toUser);
					}
				}
			}
		}
	}
}