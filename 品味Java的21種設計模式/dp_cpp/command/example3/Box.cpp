#include "Box.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example3
				{

					void Box::setOpenCommand(Command *command)
					{
						this->openCommand = command;
					}

					void Box::openButtonPressed()
					{
						//���°�ť��ִ������
						openCommand->execute();
					}

					void Box::setResetCommand(Command *command)
					{
						this->resetCommand = command;
					}

					void Box::resetButtonPressed()
					{
						//���°�ť��ִ������
						resetCommand->execute();
					}
				}
			}
		}
	}
}