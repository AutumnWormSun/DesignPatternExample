#include "Reader.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example2
				{

					void Reader::update(Subject *subject)
					{
						//���ǲ������ķ�ʽ
						puts(name+"�յ���ֽ�ˣ��Ķ��ȡ�������==="+(static_cast<NewsPaper*>(subject))->getContent());
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