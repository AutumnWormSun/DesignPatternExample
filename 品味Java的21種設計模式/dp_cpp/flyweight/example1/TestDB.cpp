#include "TestDB.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example1
				{

					TestDB::TestDB()
					{
						//ͨ����̬�������ģ�������		
						colDB->add("����,��Ա�б�,�鿴");
						colDB->add("����,��Ա�б�,�鿴");
						colDB->add("����,н������,�鿴");
						colDB->add("����,н������,�޸�");
						//���Ӹ������Ȩ����
						for(int i=0;i<3;i++)
						{
							colDB->add("����"+i+",��Ա�б�,�鿴");
						}
					}
				}
			}
		}
	}
}