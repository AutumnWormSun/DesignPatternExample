#include "Singleton.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example3
				{

					Singleton::Singleton()
					{
						//
					}

					Singleton Singleton::getInstance()
					{
						//ֱ��ʹ���Ѿ������õ�ʵ��
						return uniqueInstance;
					}

					void Singleton::singletonOperation()
					{
						//���ܴ���
					}

					std::string Singleton::getSingletonData()
					{
						return singletonData;
					}
				}
			}
		}
	}
}