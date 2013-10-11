#include "AppConfig.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example4
				{

					AppConfig *AppConfig::getInstance()
					{
						return instance;
					}

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
//JAVA TO C++ CONVERTER NOTE: The local variable in was renamed since it is a keyword in C++:
						InputStream *in_Renamed = AppConfig::typeid::getResourceAsStream("AppConfig.properties");
						try
						{
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
					}
				}
			}
		}
	}
}