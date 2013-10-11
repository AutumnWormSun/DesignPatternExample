#include "Composite.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example6
				{

					void Composite::accept(Visitor *visitor)
					{
						//�ص������߶������Ӧ����
						visitor->visitComposite(this);
					}

					std::vector<Component*> Composite::getChildComponents()
					{
						return childComponents;
					}

					Composite::Composite(std::string name)
					{
						InitializeInstanceFields();
						this->name = name;
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

					std::string Composite::getName()
					{
						return name;
					}
				}
			}
		}
	}
}