#include "Singleton.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example10
				{

					Singleton::Singleton()
					{

					}

					Singleton Singleton::getInstance()
					{
						//�ȼ��ʵ���Ƿ���ڣ���������ڲŽ��������ͬ����
						if(instance == 0)
						{
							//ͬ���飬�̰߳�ȫ�Ĵ���ʵ��
//JAVA TO C++ CONVERTER TODO TASK: There is no built-in support for multithreading in native C++:
							synchronized(Singleton::typeid)
							{
								//�ٴμ��ʵ���Ƿ���ڣ���������ڲ���Ĵ���ʵ��
								if(instance == 0)
								{
									instance = new Singleton();
								}
							}
						}
						return instance;
					}
				}
			}
		}
	}
}