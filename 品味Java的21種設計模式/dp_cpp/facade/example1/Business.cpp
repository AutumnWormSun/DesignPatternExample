#include "Business.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example1
				{

					void Business::generate()
					{
						//1�������ù��������ȡ��Ӧ��������Ϣ
						ConfigModel *cm = ConfigManager::getInstance()->getConfigData();
						if(cm->isNeedGenBusiness())
						{
							//2������Ҫ��ȥ������Ӧ�Ĵ��룬��������ļ�
							puts("���������߼�������ļ�");
						}
					}
				}
			}
		}
	}
}