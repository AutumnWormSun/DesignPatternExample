#include "ExportTxtFile.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace factorymethod
			{
				namespace example1
				{

					bool ExportTxtFile::export(std::string data)
					{
						//��ʾ��һ�£�������Ҫ�����ļ�
						puts("��������"+data+"���ı��ļ�");
						return true;
					}
				}
			}
		}
	}
}