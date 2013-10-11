#include "Singleton.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example2
				{

					Singleton::Singleton()
					{
						//
					}

					Singleton Singleton::getInstance()
					{
						//�жϴ洢ʵ���ı����Ƿ���ֵ
						if(uniqueInstance == 0)
						{
							//���û�У��ʹ���һ����ʵ��������ֵ��ֵ���洢��ʵ���ı���
							uniqueInstance = new Singleton();
						}
						//�����ֵ���Ǿ�ֱ��ʹ��
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