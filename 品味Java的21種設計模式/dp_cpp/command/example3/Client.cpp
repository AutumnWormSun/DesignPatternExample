#include "Client.h"

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

					void Client::main(std::string args[])
					{
						//1���������������ʵ������������൱������װ������
						//�ѻ����ϰ�ť�������߲�ӵ������ϡ�
						MainBoardApi *mainBoard = new GigaMainBoard();
						//������������
						OpenCommand *openCommand = new OpenCommand(mainBoard);
						//������������������
						ResetCommand *resetCommand = new ResetCommand(mainBoard);

						//2��Ϊ�����ϵİ�ť���ö�Ӧ������ð�ť֪���ø�ʲô
						Box *box = new Box();
						//����ȷ���ã����ǿ�����ť�Կ������������ť����������
						box->setOpenCommand(openCommand);
						box->setResetCommand(resetCommand);

						//3��Ȼ��ģ�ⰴ�»����ϵİ�ť
						puts("��ȷ������------------------------->");
						puts(">>>���¿�����ť��>>>");
						box->openButtonPressed();
						puts(">>>����������ť��>>>");
						box->resetButtonPressed();

						//Ȼ������������һ�أ������ǽ��в���������
						//���ǿ�����ť���������������ť�Կ�������
						box->setOpenCommand(resetCommand);
						box->setResetCommand(openCommand);
						//4��Ȼ������ģ�ⰴ�»����ϵİ�ť
						puts("����������------------------------->");
						puts(">>>���¿�����ť��>>>");
						box->openButtonPressed();
						puts(">>>����������ť��>>>");
						box->resetButtonPressed();
					}
				}
			}
		}
	}
}