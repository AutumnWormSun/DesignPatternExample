#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
						//��Ҫ��װְ����
						Handler *h1 = new ConcreteHandler1();
						Handler *h2 = new ConcreteHandler2();

						h1->setSuccessor(h2);
						//Ȼ���ύ����
						h1->handleRequest();
					}
				}
			}
		}
	}
}