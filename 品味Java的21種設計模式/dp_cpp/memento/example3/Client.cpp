#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example3
				{

					void Client::main(std::string args[])
					{
						// ����ģ���������̵Ķ���
						FlowAMock *mock = new FlowAMock("TestFlow");
						//�������̵ĵ�һ���׶�
						mock->runPhaseOne();

						//����һ��������
						FlowAMementoCareTaker *careTaker = new FlowAMementoCareTaker();
						//������ʱ����ı���¼���󣬲����浽�����߶����������Ҫ��
						FlowAMockMemento *memento = mock->createMemento();
						careTaker->saveMemento(memento);

						//���շ���һ���������̺�벿��
						mock->schema1();

						//�ӹ����߻�ȡ����¼����Ȼ�����û�ȥ��
						//��ģ���������̵Ķ����Լ��ָ��Լ����ڲ�״̬
						mock->setMemento(careTaker->retriveMemento());

						//���շ��������������̺�벿��
						mock->schema2();
					}
				}
			}
		}
	}
}