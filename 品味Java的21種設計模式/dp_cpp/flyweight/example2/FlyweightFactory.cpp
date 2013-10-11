#include "FlyweightFactory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example2
				{

					Flyweight *FlyweightFactory::getFlyweight(std::string key)
					{
						//����������������ʵ�ֲ������£�		
						//1���ȴӻ���������ң��Ƿ����key��Ӧ��Flyweight����
						Flyweight *f = fsMap->get(key);
						//2��������ڣ��ͷ������Ӧ��Flyweight����
						if(f==0)
						{
							//3�����������
							//3.1������һ���µ�Flyweight����
							f = new ConcreteFlyweight(key);
							//3.2��������µ�Flyweight������ӵ���������
							fsMap->put(key,f);
							//3.3��Ȼ�󷵻�����µ�Flyweight����
						}
						return f;
					}
				}
			}
		}
	}
}