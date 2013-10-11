#include "ConcreteAggregate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example1
				{

					ConcreteAggregate::ConcreteAggregate(std::string ss[])
					{
						this->ss = ss;
					}

					Iterator *ConcreteAggregate::createIterator()
					{
						//ʵ�ִ���Iterator�Ĺ�������
						return new ConcreteIterator(this);
					}

					object *ConcreteAggregate::get(int index)
					{
						object *retObj = 0;
						if(index < sizeof(ss) / sizeof(ss[0]))
						{
							retObj = ss[index];
						}
						return retObj;
					}

					int ConcreteAggregate::size()
					{
						return sizeof(this->ss) / sizeof(this->ss[0]);
					}
				}
			}
		}
	}
}