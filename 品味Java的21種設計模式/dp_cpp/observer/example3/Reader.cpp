#include "Reader.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example3
				{

					void Reader::update(std::string content)
					{
						//���ǲ����Ƶķ�ʽ
						puts(name+"�յ���ֽ�ˣ��Ķ��ȡ�������==="+content);
					}

					std::string Reader::getName()
					{
						return name;
					}

					void Reader::setName(std::string name)
					{
						this->name = name;
					}
				}
			}
		}
	}
}