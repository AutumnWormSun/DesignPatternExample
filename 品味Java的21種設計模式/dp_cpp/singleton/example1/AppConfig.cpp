#include "AppConfig.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example1
				{

					std::string AppConfig::getParameterA()
					{
						return parameterA;
					}

					std::string AppConfig::getParameterB()
					{
						return parameterB;
					}

					AppConfig::AppConfig()
					{
						//���ö�ȡ�����ļ��ķ���
						readConfig();
					}

					void AppConfig::readConfig()
					{
						Properties *p = new Properties();

						InputStream *in_Renamed = 0;
						try
						{
							in_Renamed = AppConfig::typeid::getResourceAsStream("AppConfig.properties");
							p->load(in_Renamed);
							//�������ļ��е����ݶ��������õ�������
							this->parameterA = p->getProperty("paramA");
							this->parameterB = p->getProperty("paramB");
						}
						catch (IOException *e)
						{
							puts("װ�������ļ������ˣ������ջ��Ϣ���£�");
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
					}
				}
			}
		}
	}
}
