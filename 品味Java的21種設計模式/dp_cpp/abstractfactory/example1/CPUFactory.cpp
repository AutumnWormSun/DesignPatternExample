#include "CPUFactory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace abstractfactory
			{
				namespace example1
				{

					CPUApi *CPUFactory::createCPUApi(int type)
					{
						CPUApi *cpu = 0;
						//���ݲ�����ѡ�񲢴�����Ӧ��CPU����
						if(type==1)
						{
							cpu = new IntelCPU(1156);
						}
						else if(type==2)
						{
							cpu = new AMDCPU(939);
						}
						return cpu;
					}
				}
			}
		}
	}
}