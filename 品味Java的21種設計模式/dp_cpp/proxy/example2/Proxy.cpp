#include "Proxy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example2
				{

					Proxy::Proxy(RealSubject *realSubject)
					{
						this->realSubject = realSubject;
					}

					void Proxy::request()
					{
						//��ת�������Ŀ�����ǰ������ִ��һЩ���ܴ���

						//ת�������Ŀ�����ķ���
						realSubject->request();

						//��ת�������Ŀ�����󣬿���ִ��һЩ���ܴ���
					}
				}
			}
		}
	}
}