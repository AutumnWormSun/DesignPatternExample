#include "Composite.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example2
				{

					void Composite::someOperation()
					{
						if (childComponents != 0)
						{
							for (std::vector<Component*>::const_iterator c = childComponents.begin(); c != childComponents.end(); ++c)
							{
								//�ݹ�Ľ����������Ӧ�����ĵ���
								(*c)->someOperation();
							}
						}
					}

					void Composite::addChild(Component *child)
					{
						//�ӳٳ�ʼ��
						if (childComponents == 0)
						{
							childComponents = std::vector<Component*>();
						}
						childComponents.push_back(child);
					}

					void Composite::removeChild(Component *child)
					{
						if (childComponents != 0)
						{
							childComponents.remove(child);
						}
					}

					Component *Composite::getChildren(int index)
					{
						if (childComponents != 0)
						{
							if(index>=0 && index<childComponents.size())
							{
								return childComponents.at(index);
							}
						}
						return 0;
					}
				}
			}
		}
	}
}