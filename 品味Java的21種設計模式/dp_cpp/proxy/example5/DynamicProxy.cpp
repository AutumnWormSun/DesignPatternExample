#include "DynamicProxy.h"

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

					OrderApi *DynamicProxy::getProxyInterface(Order *order)
					{
						//���ñ�����Ķ��󣬺÷���invoke����Ĳ���
						this->order = order;
						//�������Ķ�������Ͷ�̬�����������
						OrderApi *orderApi = static_cast<OrderApi*>(Proxy::newProxyInstance(order->getClass()->getClassLoader(), order->getClass()->getInterfaces(), this));
						return orderApi;
					}

					object *DynamicProxy::invoke(object *proxy, Method *method, object args[]) throw(Throwable)
					{
						//����ǵ���setter��������Ҫ���Ȩ��
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'startsWith' method:
						if(method->getName()->startsWith("set"))
						{
							//������Ǵ����ˣ��ǾͲ����޸�
							if(order->getOrderUser()!=0 && order->getOrderUser()->equals(args[1]))
							{
								//���Բ���
								return method->invoke(order, args);
							}
							else
							{
								puts("�Բ���"+args[1]+"������Ȩ�޸ı������е�����");
							}
						}
						else
						{
							//���ǵ��õ�setter�����ͼ�������
							return method->invoke(order, args);
						}
						return 0;
					}
				}
			}
		}
	}
}