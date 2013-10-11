#include "MonthPrizeDecorator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example4
				{

					MonthPrizeDecorator::MonthPrizeDecorator(Component *c) : Decorator(c)
					{
					}

					double MonthPrizeDecorator::calcPrize(std::string user, Date *begin, Date *end)
					{
						//1���Ȼ�ȡǰ����������Ľ���
						double money = Decorator::calcPrize(user, begin, end);
						//2��Ȼ����㵱��ҵ�񽱽�,������Ա��ʱ��ȥ��ȡ���µ�ҵ��Ȼ���ٳ���3%
						double prize = TempDB::mapMonthSaleMoney->get(user) * 0.03;
						puts(user+"����ҵ�񽱽�"+prize);
						return money + prize;
					}
				}
			}
		}
	}
}