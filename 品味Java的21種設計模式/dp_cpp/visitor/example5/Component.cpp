#include "Component.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example5
				{

					void Component::addChild(Component *child)
					{
						// ȱʡ��ʵ�֣��׳����⣬��ΪҶ�Ӷ���û��������ܣ����������û��ʵ���������
						throw new UnsupportedOperationException("����֧���������");

					}

					void Component::removeChild(Component *child)
					{
						// ȱʡ��ʵ�֣��׳����⣬��ΪҶ�Ӷ���û��������ܣ����������û��ʵ���������
						throw new UnsupportedOperationException("����֧���������");

					}

					Component *Component::getChildren(int index)
					{
						throw new UnsupportedOperationException("����֧���������");
					}
				}
			}
		}
	}
}