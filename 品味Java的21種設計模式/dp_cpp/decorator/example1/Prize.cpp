#include "Prize.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example1
				{

					double Prize::calcPrize(std::string user, Date *begin, Date *end)
					{
						double prize = 0.0;

						//���㵱��ҵ�񽱽������˶������
						prize = this->monthPrize(user, begin, end);
						//�����ۼƽ���
						prize += this->sumPrize(user, begin, end);

						//��Ҫ�жϸ���Ա����ͨ��Ա����ҵ�����Ŷӽ���ֻ��ҵ�������
						if(this->isManager(user))
						{
							prize += this->groupPrize(user, begin, end);
						}

						return prize;
					}

					double Prize::monthPrize(std::string user, Date *begin, Date *end)
					{
						//���㵱��ҵ�񽱽�,������Աȥ��ȡ���µ�ҵ��Ȼ���ٳ���3%
						double prize = TempDB::mapMonthSaleMoney->get(user) * 0.03;
						puts(user+"����ҵ�񽱽�"+prize);
						return prize;
					}

					double Prize::sumPrize(std::string user, Date *begin, Date *end)
					{
						//�����ۼƽ���,��ʵ����Ӧ�ð�����Աȥ��ȡ�ۼƵ�ҵ��Ȼ���ٳ���0.1%
						//����ʾһ�£��ٶ���ҵ��ۼ�ҵ����1000000Ԫ
						double prize = 1000000 * 0.001;
						puts(user+"�ۼƽ���"+prize);
						return prize;
					}

					bool Prize::isManager(std::string user)
					{
						//Ӧ�ô����ݿ��л�ȡ��Ա��Ӧ��ְ��
						//Ϊ����ʾ���򵥵��жϣ�ֻ�������Ǿ���
						if((new std::string("����"))->equals(user))
						{
							return true;
						}
						return false;
					}

					double Prize::groupPrize(std::string user, Date *begin, Date *end)
					{
						//���㵱���Ŷ�ҵ�񽱽��ȼ�����Ŷ��ܵ�ҵ��Ȼ���ٳ���1%�����趼��һ���Ŷӵ�
						double group = 0.0;
						for (Map<std::string, double>::const_iterator d = TempDB::mapMonthSaleMoney->begin(); d != TempDB::mapMonthSaleMoney->end(); ++d)
						{
							group += d->second;
						}
						double prize = group * 0.01;
						puts(user+"�����Ŷ�ҵ�񽱽�"+prize);
						return prize;
					}
				}
			}
		}
	}
}