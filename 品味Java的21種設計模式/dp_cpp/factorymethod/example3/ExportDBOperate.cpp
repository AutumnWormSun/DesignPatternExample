#include "ExportDBOperate.h"

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

					ExportFileApi *ExportDBOperate::factoryMethod()
					{
						//�������������ݿⱸ���ļ���ʽ�Ķ���
						return new ExportDB();
					}
				}
			}
		}
	}
}