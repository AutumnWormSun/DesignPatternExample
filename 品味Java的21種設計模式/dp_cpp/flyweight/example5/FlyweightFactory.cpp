#include "FlyweightFactory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example5
				{

					FlyweightFactory::FlyweightFactory()
					{
						//�����������ֵ���߳�
						InitializeInstanceFields();
						Thread *t = new ClearCache();
						t->start();
					}

					FlyweightFactory *FlyweightFactory::getInstance()
					{
						return factory;
					}

					int FlyweightFactory::getUseTimes(std::string key)
					{
						int count = countMap->get(key);
						if(count==0)
						{
							count = 0;
						}
						return count;
					}

					Flyweight *FlyweightFactory::getFlyweight(std::string key)
					{
						Flyweight *f = fsMap->get(key);
						//��һ�����򵥵��д��
						if(f==0)
						{
							f = new AuthorizationFlyweight(key);
							fsMap->put(key,f);
							//ͬʱ�������ü���
							countMap->put(key, 1);
							//ͬʱ���û�����������
							CacheConfModel *cm = new CacheConfModel();
							cm->setBeginTime(System::currentTimeMillis());
							cm->setForever(false);
							cm->setDurableTime(DURABLE_TIME);

							cacheConfMap->put(key, cm);
						}
						else
						{
							//��ʾ����ʹ�ã���ôӦ���������û�������
							CacheConfModel *cm = cacheConfMap->get(key);
							cm->setBeginTime(System::currentTimeMillis());
							//���û�ȥ
							this->cacheConfMap->put(key, cm);
							//ͬʱ������1
							int count = countMap->get(key);
							count++;
							countMap->put(key, count);
						}
						return f;
					}

					void FlyweightFactory::removeFlyweight(std::string key)
					{
						this->fsMap->remove(key);
						this->cacheConfMap->remove(key);
						this->countMap->remove(key);
					}

					void FlyweightFactory::ClearCache::run()
					{
						while(true)
						{
							Set<std::string> *tempSet = new HashSet<std::string>();
//JAVA TO C++ CONVERTER NOTE: The local variable set was renamed since it is a keyword in C++:
//JAVA TO C++ CONVERTER TODO TASK: C++ doesn't allow accessing outer class instance members within a nested class:
							Set<std::string> *set_Renamed = cacheConfMap::keySet();
							for (Set<std::string>::const_iterator key = set_Renamed.begin(); key != set_Renamed.end(); ++key)
							{
//JAVA TO C++ CONVERTER TODO TASK: C++ doesn't allow accessing outer class instance members within a nested class:
								CacheConfModel *ccm = cacheConfMap->get(*key);
								//�Ƚ��Ƿ���Ҫ���
								if((System::currentTimeMillis()-ccm->getBeginTime())>= ccm->getDurableTime())
								{
									//����������ȼ�¼����
									tempSet->add(*key);
								}
							}
							//�������
							for (Set<std::string>::const_iterator key = tempSet->begin(); key != tempSet->end(); ++key)
							{
								FlyweightFactory::getInstance()->removeFlyweight(*key);
							}
//JAVA TO C++ CONVERTER TODO TASK: C++ doesn't allow accessing outer class instance members within a nested class:
							puts("now thread="+fsMap->size()+",fsMap=="+fsMap::keySet());
							//��Ϣ1���������ж�
							try
							{
								delay(1000L);
							}
							catch (InterruptedException *e)
							{
								e->printStackTrace();
							}
						}
					}
				}
			}
		}
	}
}