#include "ExportOperate.h"

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

					bool ExportOperate::export(int type, std::string data)
					{
						//ʹ�ù�������
						ExportFileApi *api = factoryMethod(type);
						return api->export(data);
					}

					ExportFileApi *ExportOperate::factoryMethod(int type)
					{
						ExportFileApi *api = 0;
						//����������ѡ�񾿾�Ҫ������һ�ֵ����ļ�����
						if(type==1)
						{
							api = new ExportTxtFile();
						}
						else if(type==2)
						{
							api = new ExportDB();
						}
						return api;
					}
				}
			}
		}
	}
}