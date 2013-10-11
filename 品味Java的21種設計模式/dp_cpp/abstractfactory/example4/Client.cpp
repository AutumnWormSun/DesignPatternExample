#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						//����װ������ʦ����
						ComputerEngineer *engineer = new ComputerEngineer();
						//�ͻ�ѡ�񲢴�����Ҫʹ�õ�װ����������
						AbstractFactory *schema = new Schema3();
						//����װ������ʦ�Լ�ѡ���װ����������װ������ʦ��װ����
						engineer->makeComputer(schema);
					}
				}
			}
		}
	}
}