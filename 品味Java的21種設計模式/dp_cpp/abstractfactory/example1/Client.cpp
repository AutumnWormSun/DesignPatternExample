#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example1
				{

					void Client::main(std::string args[])
					{
						//����װ������ʦ����
						ComputerEngineer *engineer = new ComputerEngineer();
						//����װ������ʦ�Լ�ѡ����������װ������ʦ��װ����
						engineer->makeComputer(1,2);
					}
				}
			}
		}
	}
}