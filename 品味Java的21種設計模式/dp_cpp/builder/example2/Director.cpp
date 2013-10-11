#include "Director.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example2
				{

					Director::Director(Builder *builder)
					{
						this->builder = builder;
					}

					void Director::construct()
					{
						//ͨ��ʹ�ù������ӿ����������յĲ�Ʒ����
						builder->buildPart();
					}
				}
			}
		}
	}
}