#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example1
				{

					void Client::assemble()
					{
						//����������
						Receiver *receiver = new Receiver();
						//������������趨���Ľ�����
						Command *command = new ConcreteCommand(receiver);
						//����Invoker��������������ý�ȥ
						Invoker *invoker = new Invoker();
						invoker->setCommand(command);
					}
				}
			}
		}
	}
}