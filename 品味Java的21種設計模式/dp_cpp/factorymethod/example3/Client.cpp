#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example3
				{

					void Client::main(std::string args[])
					{
						//������Ҫʹ�õ�Creator����
						ExportOperate *operate = new ExportDBOperate();
						//����������ݵĹ��ܷ���
						operate->export("��������");
					}
				}
			}
		}
	}
}