#include "JavaCache.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace singleton
			{
				namespace example7
				{

					object *JavaCache::getValue(std::string key)
					{
						//�ȴӻ�������ȡֵ
						object *obj = map->get(key);
						//�жϻ��������Ƿ���ֵ
						if(obj == 0)
						{
							//���û�У���ô��ȥ��ȡ��Ӧ�����ݣ������ȡ���ݿ�����ļ�
							//����ֻ����ʾ������ֱ��д���ٵ�ֵ
							obj = key+",value";
							//�ѻ�ȡ��ֵ���ûص���������
							map->put(key, obj);
						}
						//�����ֵ�ˣ���ֱ�ӷ���ʹ��
						return obj;
					}
				}
			}
		}
	}
}