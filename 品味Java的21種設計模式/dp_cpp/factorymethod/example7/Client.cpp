#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example7
				{

					void Client::main(std::string args[])
					{
										//		//������Ҫʹ�õ�Creator����
										//		ExportOperate operate = new ExportOperate();
										//		//����������ݵĹ��ܷ���������ѡ�񵽴����͵Ĳ���
										//		operate.export(1,"��������");

						//������Ҫʹ�õ�Creator����
						ExportOperate *operate = new ExportOperate2();
						//����任����Ĳ��������Բ�������������
						operate->export(1,"Test1");
						operate->export(2,"Test2");
						operate->export(3,"Test3");
					}
				}
			}
		}
	}
}