#include "ConcreteColleagueB.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example1
				{

					ConcreteColleagueB::ConcreteColleagueB(Mediator *mediator) : Colleague(mediator)
					{
					}

					void ConcreteColleagueB::someOperation()
					{
						//����Ҫ������ͬ��ͨ�ŵ�ʱ��֪ͨ�н��߶���
						getMediator()->changed(this);
					}
				}
			}
		}
	}
}