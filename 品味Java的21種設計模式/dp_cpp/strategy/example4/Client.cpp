#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						//1��ѡ�񲢴�����Ҫʹ�õĲ��Զ���
						Strategy *strategy = new LargeCustomerStrategy();
						//2������������
						Price *ctx = new Price(strategy);

						//3�����㱨��
						double quote = ctx->quote(1000);
						puts("��ͻ����ۣ�"+quote);
					}
				}
			}
		}
	}
}