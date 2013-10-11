#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace facade
			{
				namespace example1
				{

					void Client::main(std::string args[])
					{
						//����û�������ļ�����ֱ��ʹ��Ĭ�ϵ�����
						//ͨ������£����㶼Ӧ�����ɣ�Ҳ����˵�ͻ��˱���
						//����Щģ�鶼���˽⣬���ܹ���ȷʹ������
						new Presentation()->generate();
						new Business()->generate();
						new DAO()->generate();
					}
				}
			}
		}
	}
}