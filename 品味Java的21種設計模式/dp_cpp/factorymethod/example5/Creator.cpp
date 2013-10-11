#include "Creator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example5
				{

					Product *Creator::createProduct()
					{
						//������ʹ�ù����������õ��ͻ����������Ĳ�������
						Product1 *p1 = factoryMethod1();
						Product2 *p2 = factoryMethod2();
						//�������������Ķ����Ǵ����ͻ��˶�������Ҫ��
						Product *p = new ConcreteProduct();
						p->setProduct1(p1);
						p->setProduct2(p2);

						return p;
					}
				}
			}
		}
	}
}