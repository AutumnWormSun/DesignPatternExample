#include "ConcretePrototype1.h"

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

					Prototype *ConcretePrototype1::clone()
					{
						//��򵥵Ŀ�¡���½�һ�������������û�����ԣ��Ͳ�ȥ����ֵ��
						Prototype *prototype = new ConcretePrototype1();
						return prototype;
					}
				}
			}
		}
	}
}