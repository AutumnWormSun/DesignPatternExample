#include "Singleton.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example6
				{

					Singleton::Singleton()
					{
					}

					Singleton Singleton::getInstance()
					{
						//5��ֱ��ʹ���Ѿ������õ�ʵ��
						return instance;
					}
				}
			}
		}
	}
}