#include "Card2.h"

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

					Card2::Card2(std::string account)
					{
						InitializeInstanceFields();
						this->account = account;
					}

					void Card2::pay(PaymentContext *ctx)
					{
						puts("���ڸ�"+ctx->getUserName()+"��"+this->account+"�ʺ�֧����"+ctx->getMoney()+"Ԫ");
						//�������У�����ת�ʣ��Ͳ�ȥ����
					}
				}
			}
		}
	}
}