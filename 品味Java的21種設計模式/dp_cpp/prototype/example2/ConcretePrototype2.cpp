#include "ConcretePrototype2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example2
				{

					Prototype *ConcretePrototype2::clone()
					{
						//��򵥵Ŀ�¡���½�һ�������������û�����ԣ��Ͳ�ȥ����ֵ��
						Prototype *prototype = new ConcretePrototype2();
						return prototype;
					}
				}
			}
		}
	}
}