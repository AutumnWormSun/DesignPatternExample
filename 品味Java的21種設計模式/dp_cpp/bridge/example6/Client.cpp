#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//���������ʵ�ֶ���
						MessageImplementor *impl = new MessageSMS();

						//����һ����ͨ��Ϣ����
						AbstractMessage *m = new CommonMessage(impl);
						m->sendMessage("���һ����", "С��");

						//����һ��������Ϣ����
						m = new UrgencyMessage(impl);
						m->sendMessage("���һ����", "С��");

						//����һ���ؼ���Ϣ����
						m = new SpecialUrgencyMessage(impl);
						m->sendMessage("���һ����", "С��");

						//��ʵ�ַ�ʽ�л����ֻ�����Ϣ��Ȼ����ʵ��һ��
						impl = new MessageMobile();

						m = new CommonMessage(impl);
						m->sendMessage("���һ����", "С��");

						m = new UrgencyMessage(impl);
						m->sendMessage("���һ����", "С��");

						m = new SpecialUrgencyMessage(impl);
						m->sendMessage("���һ����", "С��");
					}
				}
			}
		}
	}
}