#include "ResetCommand.h"

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

					ResetCommand::ResetCommand(MainBoardApi *mainBoard)
					{
						this->mainBoard = mainBoard;
					}

					void ResetCommand::execute()
					{
						//����������󣬸�����֪�����������������ת���������
						//������ȥ������������Ĺ���
						this->mainBoard->reset();
					}
				}
			}
		}
	}
}