#include "Composite.h"

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

					void Composite::accept(Visitor *visitor)
					{
						//�ص������߶������Ӧ����
						visitor->visitComposite(this);
						//ѭ����Ԫ�أ�����Ԫ��Ҳ���ܷ���
						for (std::vector<Component*>::const_iterator c = childComponents.begin(); c != childComponents.end(); ++c)
						{
							//�����Ӷ�����ܷ��ʣ�����ʵ�ֵݹ�
							(*c)->accept(visitor);
						}
					}

					Composite::Composite(std::string name)
					{
						InitializeInstanceFields();
						this->name = name;
					}

					void Composite::addChild(Component *child)
					{
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