#include "ConcreteDecoratorA.h"

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

					ConcreteDecoratorA::ConcreteDecoratorA(Component *component) : Decorator(component)
					{
					}

					std::string ConcreteDecoratorA::getAddedState()
					{
						return addedState;
					}

					void ConcreteDecoratorA::setAddedState(std::string addedState)
					{
						this->addedState = addedState;
					}

					void ConcreteDecoratorA::operation()
					{
						//���ø���ķ����������ڵ���ǰ��ִ��һЩ���Ӷ���
						//��������д����ʱ�򣬿���ʹ����ӵ�״̬
						Decorator::operation();
					}
				}
			}
		}
	}
}