#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example1
				{

					void Client::main(std::string args[])
					{
						//�ȴ������㽱��Ķ���
						Prize *p = new Prize();

						//���ڶ���û�����ϣ����Դ�null�Ϳ�����
						double zs = p->calcPrize("����",0,0);
						puts("==========����Ӧ�ý���"+zs);
						double ls = p->calcPrize("����",0,0);
						puts("==========����Ӧ�ý���"+ls);
						double ww = p->calcPrize("����",0,0);
						puts("==========������Ӧ�ý���"+ww);
					}
				}
			}
		}
	}
}