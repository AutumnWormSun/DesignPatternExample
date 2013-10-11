#include "FlyweightFactory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example3
				{

					FlyweightFactory::FlyweightFactory()
					{

					InitializeInstanceFields();
					}

					FlyweightFactory *FlyweightFactory::getInstance()
					{
						return factory;
					}

					Flyweight *FlyweightFactory::getFlyweight(std::string key)
					{
						Flyweight *f = fsMap->get(key);
						//��һ�����򵥵��д��
						if(f==0)
						{
							f = new AuthorizationFlyweight(key);
							fsMap->put(key,f);
						}
						return f;
					}
				}
			}
		}
	}
}