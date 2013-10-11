#include "ConcreteColleagueA.h"

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

					ConcreteColleagueA::ConcreteColleagueA(Mediator *mediator) : Colleague(mediator)
					{
					}

					void ConcreteColleagueA::someOperation()
					{
						//����Ҫ������ͬ��ͨ�ŵ�ʱ��֪ͨ�н��߶���
						getMediator()->changed(this);
					}
				}
			}
		}
	}
}