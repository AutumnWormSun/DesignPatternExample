#include "ComputerEngineer.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example3
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
						this->cpu = schema->createCPUApi();
						this->mainboard = schema->createMainboardApi();

						//����һ������Ƿ����
						this->cpu->calculate();
						this->mainboard->installCPU();
					}
				}
			}
		}
	}
}