#include "ComputerEngineer.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example4
				{

					void ComputerEngineer::makeComputer(AbstractFactory *schema)
					{
						//1������׼����װ������Ҫ�����
						prepareHardwares(schema);
						//2����װ����

						//3�����Ի���

						//4�������ͻ�
					}

					void ComputerEngineer::prepareHardwares(AbstractFactory *schema)
					{
						//����Ҫȥ׼��CPU������ľ���ʵ�֣�Ϊ��ʾ���򵥣�����ֻ׼��������
						//���ǣ�װ������ʦ����֪�����ȥ��������ô���أ�

						//ʹ�ó��󹤳�����ȡ��Ӧ�Ľӿڶ���
						this->cpu = static_cast<CPUApi*>(schema->createProduct(1));
						this->mainboard = static_cast<MainboardApi*>(schema->createProduct(2));
						this->memory = static_cast<MemoryApi*>(schema->createProduct(3));

						//����һ������Ƿ����
						this->cpu->calculate();
						this->mainboard->installCPU();
						if(memory!=0)
						{
							this->memory->cacheData();
						}
					}
				}
			}
		}
	}
}