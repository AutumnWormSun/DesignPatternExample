#include "Component.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example7
				{

					std::string Component::getComponentPath()
					{
						return componentPath;
					}

					void Component::setComponentPath(std::string componentPath)
					{
						this->componentPath = componentPath;
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