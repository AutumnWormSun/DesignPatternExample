#include "ConcreteCreator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example2
				{

					Product *ConcreteCreator::factoryMethod()
					{
						//�ض��幤������������һ�������Product����
						return new ConcreteProduct();
					}
				}
			}
		}
	}
}