#include "OpenCommand.h"

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

					OpenCommand::OpenCommand(MainBoardApi *mainBoard)
					{
						this->mainBoard = mainBoard;
					}

					void OpenCommand::execute()
					{
						//����������󣬸�����֪����ο�������ת���������
						//������ȥ��ɿ����Ĺ���
						this->mainBoard->open();
					}
				}
			}
		}
	}
}