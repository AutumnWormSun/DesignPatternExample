#include "PrototypeManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example8
				{

					PrototypeManager::PrototypeManager()
					{
						//
					}

					void PrototypeManager::setPrototype(std::string prototypeId, Prototype *prototype)
					{
						map->put(prototypeId, prototype);
					}

					void PrototypeManager::removePrototype(std::string prototypeId)
					{
						map->remove(prototypeId);
					}

					Prototype *PrototypeManager::getPrototype(std::string prototypeId) throw(Exception)
					{
						Prototype *prototype = map->get(prototypeId);
						if(prototype == 0)
						{
							throw new Exception("��ϣ����ȡ��ԭ�ͻ�û��ע����ѱ�����");
						}
						return prototype;
					}
				}
			}
		}
	}
}