#include "MenuCommand.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example7
				{

					void MenuCommand::addCommand(Command *cmd)
					{
						col->add(cmd);
					}

					void MenuCommand::setCookApi(CookApi *cookApi)
					{
						//ʲô��������
					}

					int MenuCommand::getTableNum()
					{
						//ʲô��������
						return 0;
					}

					Collection<Command*> *MenuCommand::getCommands()
					{
						return this->col;
					}

					void MenuCommand::execute()
					{
						//ִ�в˵����ǰѲ˵����ݸ����
						CommandQueue::addMenu(this);
					}
				}
			}
		}
	}
}