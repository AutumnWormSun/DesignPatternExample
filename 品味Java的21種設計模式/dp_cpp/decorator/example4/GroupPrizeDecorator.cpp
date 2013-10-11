#include "GroupPrizeDecorator.h"

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

					GroupPrizeDecorator::GroupPrizeDecorator(Component *c) : Decorator(c)
					{
					}

					double GroupPrizeDecorator::calcPrize(std::string user, Date *begin, Date *end)
					{
						//1���Ȼ�ȡǰ����������Ľ���
						double money = Decorator::calcPrize(user, begin, end);
						//2��Ȼ����㵱���Ŷ�ҵ�񽱽��ȼ�����Ŷ��ܵ�ҵ��Ȼ���ٳ���1%
						//���趼��һ���Ŷӵ�
						double group = 0.0;
						for (Map<std::string, double>::const_iterator d = TempDB::mapMonthSaleMoney->begin(); d != TempDB::mapMonthSaleMoney->end(); ++d)
						{
							group += d->second;
						}
						double prize = group * 0.01;
						puts(user+"�����Ŷ�ҵ�񽱽�"+prize);
						return money + prize;
					}
				}
			}
		}
	}
}