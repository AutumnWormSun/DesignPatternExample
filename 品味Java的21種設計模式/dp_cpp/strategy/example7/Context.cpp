#include "Context.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example7
				{

					Context::Context(Strategy *aStrategy)
					{
						this->strategy = aStrategy;
					}

					void Context::contextInterface()
					{
						//ͨ����ת������Ĳ��Զ�������㷨����
						strategy->algorithmInterface();
					}
				}
			}
		}
	}
}