#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example8
				{

					void Client::main(std::string args[])
					{
						//׼��Ҫ����������
						Command *cmd = new PrintService("�˻�������ģʽʾ��");
						//���������������
						Invoker *invoker = new Invoker();
						invoker->setCmd(cmd);

						//���°�ť����������ִ������
						invoker->startPrint();
					}
				}
			}
		}
	}
}