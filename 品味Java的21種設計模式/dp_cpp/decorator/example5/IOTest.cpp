#include "IOTest.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example5
				{

					void IOTest::main(std::string args[]) throw(Exception)
					{
						//��ʽ��ȡ�ļ�
						DataInputStream *din = 0;
						try
						{
							din = new DataInputStream(new BufferedInputStream(new FileInputStream("IOTest.txt")));
							//Ȼ��Ϳ��Ի�ȡ�ļ�������
							char bs[din->available()];
							din->read(bs);
							std::string content = std::string(bs);
							puts("�ļ�����===="+content);
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							din->close();
						}
					}
				}
			}
		}
	}
}