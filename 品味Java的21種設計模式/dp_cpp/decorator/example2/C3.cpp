#include "C3.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example2
				{

					void C3::a1()
					{
						//ת��A����Ĺ���
						a->a1();
					}

					void C3::b1()
					{
						//ת��B����Ĺ���
						b->b1();
					}

					void C3::c11()
					{
						puts("now in C3.c11");
					}
				}
			}
		}
	}
}