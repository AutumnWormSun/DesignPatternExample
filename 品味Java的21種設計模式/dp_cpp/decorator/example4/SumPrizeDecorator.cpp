#include "SumPrizeDecorator.h"

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

					SumPrizeDecorator::SumPrizeDecorator(Component *c) : Decorator(c)
					{
					}

					double SumPrizeDecorator::calcPrize(std::string user, Date *begin, Date *end)
					{
						//1���Ȼ�ȡǰ����������Ľ���
						double money = Decorator::calcPrize(user, begin, end);
						//2��Ȼ������ۼƽ���,��ʵ����Ӧ�ð�����Աȥ��ȡ�ۼƵ�ҵ��Ȼ���ٳ���0.1%
						//����ʾһ�£��ٶ���ҵ��ۼ�ҵ����1000000Ԫ
						double prize = 1000000 * 0.001;
						puts(user+"�ۼƽ���"+prize);
						return money + prize;
					}
				}
			}
		}
	}
}