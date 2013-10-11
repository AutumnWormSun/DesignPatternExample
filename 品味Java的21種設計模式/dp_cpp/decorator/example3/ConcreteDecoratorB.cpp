#include "ConcreteDecoratorB.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example3
				{

					ConcreteDecoratorB::ConcreteDecoratorB(Component *component) : Decorator(component)
					{
					}

					void ConcreteDecoratorB::addedBehavior()
					{
						//��Ҫ��ӵ�ְ��ʵ��
					}

					void ConcreteDecoratorB::operation()
					{
						//���ø���ķ����������ڵ���ǰ��ִ��һЩ���Ӷ���
						Decorator::operation();
						addedBehavior();
					}
				}
			}
		}
	}
}