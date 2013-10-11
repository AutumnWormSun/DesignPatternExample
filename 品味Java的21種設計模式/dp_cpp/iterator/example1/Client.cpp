#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example1
				{

					void Client::someOperation()
					{
						std::string names[3] = {"����","����","����"};
						//�����ۺ϶���
						Aggregate *aggregate = new ConcreteAggregate(names);
						//ѭ������ۺ϶����е�ֵ
						Iterator it = aggregate->createIterator();
						//�������õ���������һ��Ԫ��
						it->first();
						while(!it->isDone())
						{
							//ȡ����ǰ��Ԫ����
							object *obj = it->currentItem();
							puts("the obj=="+obj);
							//�����û�е����������ô�����µ���һ��
							it->next();
						}
					}

					void Client::main(std::string args[])
					{
						//���Լ򵥵Ĳ���һ��
						Client *client = new Client();
						client->someOperation();
					}
				}
			}
		}
	}
}