#include "Reader.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example4
				{

					std::string Reader::getName()
					{
						return name;
					}

					void Reader::setName(std::string name)
					{
						this->name = name;
					}

					void Reader::update(Observable *o, object *obj)
					{
						//���ǲ����Ƶķ�ʽ
						puts(name+"�յ���ֽ�ˣ��Ķ��ȡ�Ŀ���ƹ�����������==="+obj);
						//���ǻ�ȡ��������
						puts(name+"�յ���ֽ�ˣ��Ķ��ȡ�������Ŀ�����ȥ����������===" +(static_cast<NewsPaper*>(o))->getContent());
					}
				}
			}
		}
	}
}