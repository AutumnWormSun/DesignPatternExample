#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example1
				{

					void Client::main(std::string args[])
					{
						FeeRequest *request = new FeeRequest();

						//��ʼ����
						std::string ret1 = request->requestToProjectManager("С��", 300);
						puts("the ret1="+ret1);
						std::string ret2 = request->requestToProjectManager("С��", 300);
						puts("the ret2="+ret2);

						std::string ret3 = request->requestToProjectManager("С��", 600);
						puts("the ret3="+ret3);
						std::string ret4 = request->requestToProjectManager("С��", 600);
						puts("the ret4="+ret4);

						std::string ret5 = request->requestToProjectManager("С��", 1200);
						puts("the ret5="+ret5);
						std::string ret6 = request->requestToProjectManager("С��", 1200);
						puts("the ret6="+ret6);
					}
				}
			}
		}
	}
}