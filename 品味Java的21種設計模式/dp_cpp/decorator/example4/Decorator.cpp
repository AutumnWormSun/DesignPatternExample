#include "Decorator.h"

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

					Decorator::Decorator(Component *c)
					{
						this->c = c;
					}

					double Decorator::calcPrize(std::string user, Date *begin, Date *end)
					{
						//ת���������ķ���
						return c->calcPrize(user, begin, end);
					}
				}
			}
		}
	}
}