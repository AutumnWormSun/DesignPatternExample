#include "Presentation.h"

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

					void Presentation::generate()
					{
						//1�������ù��������ȡ��Ӧ��������Ϣ
						ConfigModel *cm = ConfigManager::getInstance()->getConfigData();
						if(cm->isNeedGenPresentation())
						{
							//2������Ҫ��ȥ������Ӧ�Ĵ��룬��������ļ�
							puts("�������ɱ��ֲ�����ļ�");
						}
					}
				}
			}
		}
	}
}