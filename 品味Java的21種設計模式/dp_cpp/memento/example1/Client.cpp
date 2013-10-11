#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example1
				{

					void Client::main(std::string args[])
					{
						// ����ģ���������̵Ķ���
						FlowAMock *mock = new FlowAMock("TestFlow");
						//�������̵ĵ�һ���׶�
						mock->runPhaseOne();
						//�õ���һ���׶����������������ݣ�����Ҫ��
						int tempResult = mock->getTempResult();
						std::string tempState = mock->getTempState();

						//���շ���һ���������̺�벿��
						mock->schema1();

						//�ѵ�һ���׶������������������������û�ȥ
						mock->setTempResult(tempResult);
						mock->setTempState(tempState);

						//���շ��������������̺�벿��
						mock->schema2();
					}
				}
			}
		}
	}
}