#include "ConfigManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example3
				{

					ConfigManager::ConfigManager()
					{

					}

					ConfigManager *ConfigManager::getInstance()
					{
						if(manager == 0)
						{
							manager = new ConfigManager();
							cm = new ConfigModel();
							//��ȡ�����ļ�����ֵ���õ�ConfigModel��ȥ
						}
						return manager;
					}

					ConfigModel *ConfigManager::getConfigData()
					{
						return cm;
					}
				}
			}
		}
	}
}