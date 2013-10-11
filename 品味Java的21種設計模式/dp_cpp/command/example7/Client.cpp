#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example7
				{

					void Client::main(std::string args[])
					{
						//��Ҫ������̨��������������������
						CookManager::runCookManager();

						//Ϊ�˼򵥣�ֱ����ѭ��ģ�������ŵ��
						for(int i = 0;i<5;i++)
						{
							//��������Ա
							Waiter *waiter = new Waiter();
							//����������󣬾���Ҫ��Ĳ�
							Command *chop = new ChopCommand(i);
							Command *duck = new DuckCommand(i);
							//��ˣ����ǰ���Щ���÷���Ա��¼����
							waiter->orderDish(chop);
							waiter->orderDish(duck);
							//������
							waiter->orderOver();
						}
					}
				}
			}
		}
	}
}