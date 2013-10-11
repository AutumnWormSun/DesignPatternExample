#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//1���������������ʵ������������൱������װ������
						//�ѻ����ϰ�ť�������߲�ӵ������ϡ�
						MainBoardApi *mainBoard = new GigaMainBoard();
						OpenCommand *openCommand = new OpenCommand(mainBoard);
						//2��Ϊ�����ϵİ�ť���ö�Ӧ������ð�ť֪���ø�ʲô
						Box *box = new Box();
						box->setOpenCommand(openCommand);

						//3��Ȼ��ģ�ⰴ�»����ϵİ�ť
						box->openButtonPressed();
					}
				}
			}
		}
	}
}