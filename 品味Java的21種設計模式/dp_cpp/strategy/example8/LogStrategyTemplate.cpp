#include "LogStrategyTemplate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace strategy
			{
				namespace example8
				{

					void LogStrategyTemplate::log(std::string msg)
					{
						//��һ��������Ϣ��Ӽ�¼��־��ʱ��
						DateFormat *df = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss SSS");
						msg = df->format(new java::util::Date())+" �����ǣ�"+ msg;
						//�ڶ���������ִ����־��¼
						doLog(msg);
					}
				}
			}
		}
	}
}