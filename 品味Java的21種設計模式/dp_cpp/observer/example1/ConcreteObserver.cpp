#include "ConcreteObserver.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example1
				{

					void ConcreteObserver::update(Subject *subject)
					{
						// ����ĸ���ʵ��
						//���������Ҫ���¹۲��ߵ�״̬��ʹ����Ŀ���״̬����һ��
						observerState = (static_cast<ConcreteSubject*>(subject))->getSubjectState();
					}
				}
			}
		}
	}
}