#include "TestDB.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace flyweight
			{
				namespace example4
				{

					TestDB::TestDB()
					{
						//ͨ����̬�������ģ������ݣ�����һ����ʶ�������Ƿ������Ȩ����
						colDB->add("����,��Ա�б�,�鿴,1");
						colDB->add("����,��Ա�б�,�鿴,1");
						colDB->add("����,����н������,,2");

						mapDB->put("����н������",new std::string[]{"н������,�鿴","н������,�޸�"});

						//���Ӹ������Ȩ����
						for(int i=0;i<3;i++)
						{
							colDB->add("����"+i+",��Ա�б�,�鿴,1");
						}
					}
				}
			}
		}
	}
}