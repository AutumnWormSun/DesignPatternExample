#include "Schema3.h"

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

					object *Schema3::createProduct(int type)
					{
						object *retObj = 0;
						//typeΪ1��ʾ����CPU��typeΪ2��ʾ�������壬typeΪ3��ʾ�����ڴ�
						if(type==1)
						{
							retObj = new IntelCPU(1156);
						}
						else if(type==2)
						{
							retObj = new GAMainboard(1156);
						}
						//��������ӵĲ�Ʒ
						else if(type==3)
						{
							retObj = new HyMemory();
						}
						return retObj;
					}
				}
			}
		}
	}
}