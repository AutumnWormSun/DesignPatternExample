#include "DollarCash.h"

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

					void DollarCash::pay(PaymentContext *ctx)
					{
						puts("���ڸ�"+ctx->getUserName()+"��Ԫ�ֽ�֧��"+ctx->getMoney()+"Ԫ");
					}
				}
			}
		}
	}
}