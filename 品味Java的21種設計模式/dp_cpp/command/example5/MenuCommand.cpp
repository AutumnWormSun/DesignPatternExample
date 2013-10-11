#include "MenuCommand.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example5
				{

					void MenuCommand::addCommand(Command *cmd)
					{
						col->add(cmd);
					}

					void MenuCommand::execute()
					{
						//ִ�в˵���ʵ����ѭ��ִ�в˵������ÿ����
						for (Collection<Command*>::const_iterator cmd = col->begin(); cmd != col->end(); ++cmd)
						{
							(*cmd)->execute();
						}
					}
				}
			}
		}
	}
}