#include "ConcreteCommand.h"

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

					ConcreteCommand::ConcreteCommand(Receiver *receiver)
					{
						this->receiver = receiver;
					}

					void ConcreteCommand::execute()
					{
						//ͨ����ת�������߶������Ӧ�������ý�����������ִ�й���
						receiver->action();
					}
				}
			}
		}
	}
}