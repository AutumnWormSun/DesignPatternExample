#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
										//		//����Facade����Ҫ�Լ������ģ�齻��
										//		AModuleApi a = new AModuleImpl();
										//		a.testA();
										//		BModuleApi b = new BModuleImpl();
										//		b.testB();
										//		CModuleApi c = new CModuleImpl();
										//		c.testC();
										//		
										//		System.out.println("ʹ��Facade----------------------��");
						//ʹ����Facade
						new Facade()->test();
					}
				}
			}
		}
	}
}