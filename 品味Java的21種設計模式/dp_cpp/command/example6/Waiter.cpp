#include "Waiter.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example6
				{

					void Waiter::orderDish(Command *cmd)
					{
						//��ӵ��˵���
						menuCommand->addCommand(cmd);
					}

					void Waiter::orderOver()
					{
						this->menuCommand->execute();
					}
				}
			}
		}
	}
}