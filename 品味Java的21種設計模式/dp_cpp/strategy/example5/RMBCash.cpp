#include "RMBCash.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example5
				{

					void RMBCash::pay(PaymentContext *ctx)
					{
						puts("���ڸ�"+ctx->getUserName()+"������ֽ�֧��"+ctx->getMoney()+"Ԫ");
					}
				}
			}
		}
	}
}