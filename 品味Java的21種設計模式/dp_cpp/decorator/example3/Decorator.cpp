#include "Decorator.h"

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

					Decorator::Decorator(Component *component)
					{
						this->component = component;
					}

					void Decorator::operation()
					{
						//ת�������������󣬿�����ת��ǰ��ִ��һЩ���Ӷ���
						component->operation();
					}
				}
			}
		}
	}
}