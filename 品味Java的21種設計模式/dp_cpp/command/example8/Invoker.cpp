#include "Invoker.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example8
				{

					void Invoker::setCmd(Command *cmd)
					{
						this->cmd = cmd;
					}

					void Invoker::startPrint()
					{
						//ִ������Ĺ���
						this->cmd->execute();
					}
				}
			}
		}
	}
}