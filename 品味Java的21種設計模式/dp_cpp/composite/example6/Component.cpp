#include "Component.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example6
				{

					Component *Component::getParent()
					{
						return parent;
					}

					void Component::setParent(Component *parent)
					{
						this->parent = parent;
					}

					std::vector<Component*> Component::getChildren()
					{
						throw new UnsupportedOperationException("����֧���������");
					}

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