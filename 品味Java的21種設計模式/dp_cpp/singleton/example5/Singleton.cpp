#include "Singleton.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example5
				{

					Singleton::Singleton()
					{
					}

					Singleton Singleton::getInstance()
					{
						//6���жϴ洢ʵ���ı����Ƿ���ֵ
						if(instance == 0)
						{
							//6.1�����û�У��ʹ���һ����ʵ��������ֵ��ֵ���洢��ʵ���ı���
							instance = new Singleton();
						}
						//6.2�������ֵ���Ǿ�ֱ��ʹ��
						return instance;
					}
				}
			}
		}
	}
}