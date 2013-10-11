#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example5
				{

					void Client::main(std::string args[])
					{
						//����������
						ConcreteBuilder *builder = new ConcreteBuilder("001",12345L,67890L);
						//������Ҫ�����ݣ�Ȼ�󹹽����պ�ͬ����
						InsuranceContract *contract = builder->setPersonName("����")->setOtherData("test")->build();
						//�������պ�ͬ����ķ���
						contract->someOperation();
					}
				}
			}
		}
	}
}