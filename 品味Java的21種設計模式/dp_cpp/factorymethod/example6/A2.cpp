#include "A2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example6
				{

					C1 *A2::createC1()
					{
						//������ѡ�����ʵ�֣�����������
						return new C2();
					}
				}
			}
		}
	}
}