#include "DAO.h"

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

					void DAO::generate()
					{
						//1�������ù��������ȡ��Ӧ��������Ϣ
						ConfigModel *cm = ConfigManager::getInstance()->getConfigData();
						if(cm->isNeedGenDAO())
						{
							//2������Ҫ��ȥ������Ӧ�Ĵ��룬��������ļ�
							puts("�����������ݲ�����ļ�");
						}
					}
				}
			}
		}
	}
}