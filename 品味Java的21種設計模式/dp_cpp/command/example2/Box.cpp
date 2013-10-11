#include "Box.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example2
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
				}
			}
		}
	}
}