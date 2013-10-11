#include "LogContext.h"

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

					void LogContext::log(std::string msg)
					{
						//�����������棬����ʵ�ֶԾ�����Ե�ѡ��
						//����ѡ�ò��ԣ���¼�����ݿ�
						LogStrategy *strategy = new DbLog();
						try
						{
							strategy->log(msg);
						}
						catch(Exception *err)
						{
							//�����ˣ��Ǿͼ�¼���ļ���
							strategy = new FileLog();
							strategy->log(msg);
						}
					}
				}
			}
		}
	}
}