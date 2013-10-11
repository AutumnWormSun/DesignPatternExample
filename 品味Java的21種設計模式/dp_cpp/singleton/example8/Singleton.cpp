#include "Singleton.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example8
				{

					Singleton::Singleton()
					{
						//
					}

					Singleton Singleton::getInstance()
					{
						//�ȴӻ����л�ȡ
						Singleton instance = static_cast<Singleton>(map->get(DEFAULT_KEY));
						//���û�У����½�һ����Ȼ�����ûػ�����
						if(instance==0)
						{
							instance = new Singleton();
							map->put(DEFAULT_KEY, instance);
						}
						//����о�ֱ��ʹ��
						return instance;
					}
				}
			}
		}
	}
}