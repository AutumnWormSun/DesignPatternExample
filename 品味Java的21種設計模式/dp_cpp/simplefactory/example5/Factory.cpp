#include "Factory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example5
				{

					Api *Factory::createApi()
					{
						//ֱ�Ӷ�ȡ�����ļ�����ȡ��Ҫ����ʵ������

						//������ζ�ȡProperties������η�������Ͳ�������
						Properties *p = new Properties();
//JAVA TO C++ CONVERTER NOTE: The local variable in was renamed since it is a keyword in C++:
						InputStream *in_Renamed = 0;
						try
						{
							in_Renamed = Factory::typeid::getResourceAsStream("FactoryTest.properties");
							p->load(in_Renamed);
						}
						catch (IOException *e)
						{
							puts("װ�ع��������ļ������ˣ�����Ķ�ջ��Ϣ���£�");
							e->printStackTrace();
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							try
							{
								in_Renamed->close();
							}
							catch (IOException *e)
							{
								e->printStackTrace();
							}
						}
						//�÷���ȥ��������Щ���⴦������ƵĹ�������Ͳ�����
						Api *api = 0;
						try
						{
							api = static_cast<Api*>(Class::forName(p->getProperty("ImplClass"))->newInstance());
						}
						catch (InstantiationException *e)
						{
							e->printStackTrace();
						}
						catch (IllegalAccessException *e)
						{
							e->printStackTrace();
						}
						catch (ClassNotFoundException *e)
						{
							e->printStackTrace();
						}
						return api;
					}
				}
			}
		}
	}
}