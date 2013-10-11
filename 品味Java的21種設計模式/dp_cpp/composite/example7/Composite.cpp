#include "Composite.h"

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

					std::string Composite::getName()
					{
						return this->name;
					}

					void Composite::addChild(Component *child)
					{
						//�ӳٳ�ʼ��
						if (childComponents == 0)
						{
							childComponents = std::vector<Component*>();
						}
						childComponents.push_back(child);

						//���ж����·���Ƿ�Ϊ�գ����Ϊ�գ�˵��������Ǹ����
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(this->getComponentPath() == "" || this->getComponentPath().trim()->length()==0)
						{
							//�ѱ������name���õ����·����
							this->setComponentPath(this->name);
						}
						//�ж�Ҫ����������·�����Ƿ���ֹ�
						//���ж��Ƿ��Ǹ����
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'startsWith' method:
						if(this->getComponentPath().startsWith(child->getName()+"."))
						{
							//˵���Ǹ�������ظ������
							throw new java::lang::IllegalArgumentException("�ڱ�ͨ·�ϣ���� '"+child->getName()+"' �ѱ���ӹ���");
						}
						else
						{
							if(this->getComponentPath().find("."+child->getName()) < 0)
							{
								//��ʾû�г��ֹ�,��ô���Լ���
								//���������·��
								std::string componentPath = this->getComponentPath()+"."+child->getName();
								//�����������·��
								child->setComponentPath(componentPath);
							}
							else
							{
								throw new java::lang::IllegalArgumentException("�ڱ�ͨ·�ϣ���� '"+child->getName()+"' �ѱ���ӹ���");
							}
						}
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