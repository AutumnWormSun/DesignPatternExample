#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						//�����ȵ�¼ϵͳ������һ������
						OrderApi *order = new OrderProxy(new Order("���ģʽ",100,"����"));
						//������Ҫ���޸ģ��Ǿͻᱨ��
						order->setOrderNum(123, "����");
						//���order
						puts("�����޸ĺ󶩵���¼û�б仯��"+order);
						//�����޸ľͲ���������
						order->setOrderNum(123, "����");
						//�ٴ����order
						puts("�����޸ĺ󣬶�����¼��"+order);
					}
				}
			}
		}
	}
}