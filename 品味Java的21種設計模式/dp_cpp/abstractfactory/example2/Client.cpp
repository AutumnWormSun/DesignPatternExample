#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
						//�������󹤳�����
						AbstractFactory *af = new ConcreteFactory1();
						//ͨ�����󹤳�����ȡһϵ�еĶ������ƷA�Ͳ�ƷB
						af->createProductA();
						af->createProductB();
					}
				}
			}
		}
	}
}