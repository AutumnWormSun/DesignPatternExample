#include "ExportTxtFileOperate.h"

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

					ExportFileApi *ExportTxtFileOperate::factoryMethod()
					{
						//�����������ı��ļ���ʽ�Ķ���
						return new ExportTxtFile();
					}
				}
			}
		}
	}
}