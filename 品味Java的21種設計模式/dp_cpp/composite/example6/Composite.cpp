#include "Composite.h"

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

					void Composite::addChild(Component *child)
					{
						//�ӳٳ�ʼ��
						if (childComponents == 0)
						{
							childComponents = std::vector<Component*>();
						}
						childComponents.push_back(child);

						//��ӶԸ����������
						child->setParent(this);
					}

					void Composite::removeChild(Component *child)
					{
						if (childComponents != 0)
						{
							//���ҵ�Ҫɾ��������ڼ����е�����λ��
							int idx = childComponents.find(child);
							if (idx != -1)
							{
								//�Ȱѱ�ɾ������Ʒ������ĸ���Ʒ������ó�Ϊ��ɾ������Ʒ���������ĸ���Ʒ���
								for (unknown::const_iterator c = child->getChildren().begin(); c != child->getChildren().end(); ++c)
								{
									//ɾ������������Ǳ�ʵ����һ�����������
									(*c)->setParent(this);
									//�ѱ�ɾ������Ʒ������������������ӵ���ǰʵ����
									childComponents.push_back(*c);
								}

								//���ɾ��
								childComponents.remove(idx);
							}
						}
					}

					std::vector<Component*> Composite::getChildren()
					{
						return childComponents;
					}

					Composite::Composite(std::string name)
					{
						InitializeInstanceFields();
						this->name = name;
					}

					void Composite::printStruct(std::string preStr)
					{
						//�Ȱ��Լ����ȥ
						puts(preStr+"+"+this->name);
						//��������������������ô�������Щ���������
						if(this->childComponents!=0)
						{
							//Ȼ�����һ���ո񣬱�ʾ�������һ���ո�
							preStr+=" ";
							//�����ǰ������Ӷ�����
							for (std::vector<Component*>::const_iterator c = childComponents.begin(); c != childComponents.end(); ++c)
							{
								//�ݹ����ÿ���Ӷ���
								(*c)->printStruct(preStr);
							}
						}
					}
				}
			}
		}
	}
}