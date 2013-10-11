#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example5
				{

					void Client::main(std::string args[])
					{
						//�����ȵ�¼ϵͳ������һ������
						Order *order = new Order("���ģʽ",100,"����");

						//����һ����̬����
						DynamicProxy *dynamicProxy = new DynamicProxy();
						//Ȼ��Ѷ����Ͷ�̬�����������
						OrderApi *orderApi = dynamicProxy->getProxyInterface(order);

						//���¾���Ҫʹ�ñ�������Ľӿ���������
						//������Ҫ���޸ģ��Ǿͻᱨ��
						orderApi->setOrderNum(123, "����");
						//���order
						puts("�����޸ĺ󶩵���¼û�б仯��"+orderApi);
						//�����޸ľͲ���������
						orderApi->setOrderNum(123, "����");
						//�ٴ����order
						puts("�����޸ĺ󣬶�����¼��"+orderApi);

					}
				}
			}
		}
	}
}