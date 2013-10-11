#include "ExportOperate2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example7
				{

					ExportFileApi *ExportOperate2::factoryMethod(int type)
					{
						ExportFileApi *api = 0;
						//����ȫ�����ǣ�Ҳ����ѡ���Լ�����Ȥ�ĸ��ǣ�
						//����ֻ������Լ��µ�ʵ�֣������Ĳ���
						if(type==3)
						{
							api = new ExportXml();
						}
						else
						{
							//�����Ļ����ø�����ʵ��
							api = ExportOperate::factoryMethod(type);
						}
						return api;
					}
				}
			}
		}
	}
}