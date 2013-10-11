#include "CommandQueue.h"

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

					void CommandQueue::addMenu(MenuCommand *menu)
					{
						//һ���˵���������ܶ��������
						for (unknown::const_iterator cmd = menu->getCommands()->begin(); cmd != menu->getCommands()->end(); ++cmd)
						{
							cmds.push_back(*cmd);
						}
					}

					Command *CommandQueue::getOneCommand()
					{
						Command *cmd = 0;
						if(cmds.size() > 0)
						{
							//ȡ�����еĵ�һ������Ϊ��Լ���İ��ռ�����Ⱥ�������
							cmd = cmds.front();
							//ͬʱ�Ӷ�������ȡ������������
							cmds.remove(0);
						}
						return cmd;
					}
				}
			}
		}
	}
}