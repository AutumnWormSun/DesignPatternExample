#include "Facade.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example2
				{

					void Facade::test()
					{
						//���ڲ�ʵ�ֵ�ʱ�򣬿��ܻ���õ��ڲ��Ķ��ģ��
						AModuleApi *a = new AModuleImpl();
						a->testA();
						BModuleApi *b = new BModuleImpl();
						b->testB();
						CModuleApi *c = new CModuleImpl();
						c->testC();
					}
				}
			}
		}
	}
}