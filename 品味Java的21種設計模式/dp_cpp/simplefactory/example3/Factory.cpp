#include "Factory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example3
				{

					Api *Factory::createApi()
					{
						//����ֻ��һ��ʵ�֣��Ͳ��������ж���
						return new Impl();
					}
				}
			}
		}
	}
}