#include "ExportOperate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example3
				{

					bool ExportOperate::export(std::string data)
					{
						//ʹ�ù�������
						ExportFileApi *api = factoryMethod();
						return api->export(data);
					}
				}
			}
		}
	}
}