#include "Card.h"

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

					void Card::pay(PaymentContext *ctx)
					{
						//����µ��㷨�Լ�֪��Ҫʹ����չ��֧�������ģ�����ǿ������һ��
						PaymentContext2 *ctx2 = static_cast<PaymentContext2*>(ctx);
						puts("���ڸ�"+ctx2->getUserName()+"��"+ctx2->getAccount()+"�ʺ�֧����"+ctx2->getMoney()+"Ԫ");
						//�������У�����ת�ʣ��Ͳ�ȥ����
					}
				}
			}
		}
	}
}