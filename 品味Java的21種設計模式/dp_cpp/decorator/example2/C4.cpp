#include "C4.h"

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

					void C4::setB(B *b)
					{
						this->b = b;
					}

					void C4::a1()
					{
						//ת��A����Ĺ���
						a->a1();
					}

					void C4::b1()
					{
						//ת��B����Ĺ���
						b->b1();
					}

					void C4::c11()
					{
						puts("now in C4.c11");
					}
				}
			}
		}
	}
}