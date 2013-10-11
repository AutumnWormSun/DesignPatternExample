#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example5
				{

					void Client::main(std::string args[])
					{
						//ֻ�Ǹ��������Ա��˾ͺ���
						//��������Ա
						Waiter *waiter = new Waiter();

						//����������󣬾���Ҫ��Ĳ�
						Command *chop = new ChopCommand();
						Command *duck = new DuckCommand();
						Command *pork = new PorkCommand();

						//��ˣ����ǰ���Щ���÷���Ա��¼����
						waiter->orderDish(chop);
						waiter->orderDish(duck);
						waiter->orderDish(pork);

						//������
						waiter->orderOver();
					}
				}
			}
		}
	}
}