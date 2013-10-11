#include "Handler.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example5
				{

					void Handler::setSuccessor(Handler *successor)
					{
						this->successor = successor;
					}

					object *Handler::handleRequest(RequestModel *rm)
					{
						if(successor != 0)
						{
							//�����Ĭ�ϵ�ʵ�֣�������಻Ը�⴦����������Ǿʹ��ݵ���һ��ְ�����ȥ����
							return this->successor->handleRequest(rm);
						}
						else
						{
							puts("û�к������������ʱ��֧�������Ĺ��ܴ���");
							return false;
						}
					}
				}
			}
		}
	}
}