#include "DbLog.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example6
				{

					void DbLog::log(std::string msg)
					{
						//�������
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(msg!="" && msg.trim()->length()>5)
						{
							int a = 5/0;
						}
						puts("���ڰ� '"+msg+"' ��¼�����ݿ���");
					}
				}
			}
		}
	}
}