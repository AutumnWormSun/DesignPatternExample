#include "Invoker.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example9
				{

					void Invoker::startPrint(Command *cmd)
					{
						puts("��Invoker�У��������ǰ");
						cmd->execute();
						puts("����������");
					}
				}
			}
		}
	}
}