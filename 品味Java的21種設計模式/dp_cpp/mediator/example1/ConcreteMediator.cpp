#include "ConcreteMediator.h"

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

					void ConcreteMediator::setConcreteColleagueA(ConcreteColleagueA *colleague)
					{
						colleagueA = colleague;
					}

					void ConcreteMediator::setConcreteColleagueB(ConcreteColleagueB *colleague)
					{
						colleagueB = colleague;
					}

					void ConcreteMediator::changed(Colleague *colleague)
					{
						//ĳ��ͬ���෢���˱仯��ͨ����Ҫ������ͬ�½���
						//����Э����Ӧ��ͬ�¶�����ʵ��Э����Ϊ
					}
				}
			}
		}
	}
}