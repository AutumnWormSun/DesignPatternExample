#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						//��Ҫ��װְ����		
						Handler *h1 = new GeneralManager();
						Handler *h2 = new DepManager();
						Handler *h3 = new ProjectManager();
						h3->setSuccessor(h2);
						h2->setSuccessor(h1);

						//��ʼ��������۲ͷ���
						std::string ret1 = h3->handleFeeRequest("С��", 300);
						puts("the ret1="+ret1);
						std::string ret2 = h3->handleFeeRequest("С��", 600);
						puts("the ret2="+ret2);
						std::string ret3 = h3->handleFeeRequest("С��", 1200);
						puts("the ret3="+ret3);

						//��ʼ����������÷���
						h3->handlePreFeeRequest("С��", 3000);
						h3->handlePreFeeRequest("С��", 6000);
						h3->handlePreFeeRequest("С��", 32000);
					}
				}
			}
		}
	}
}