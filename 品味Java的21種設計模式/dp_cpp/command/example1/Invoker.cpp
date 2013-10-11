#include "Invoker.h"

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

					void Invoker::setCommand(Command *command)
					{
						this->command = command;
					}

					void Invoker::runCommand()
					{
						//������������ִ�з���
						command->execute();
					}
				}
			}
		}
	}
}