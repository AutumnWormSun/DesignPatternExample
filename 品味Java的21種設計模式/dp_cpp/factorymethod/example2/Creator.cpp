#include "Creator.h"

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

					void Creator::someOperation()
					{
						//ͨ������Щ����ʵ���У���Ҫ���ù�����������ȡProduct����
						Product *product = factoryMethod();
					}
				}
			}
		}
	}
}