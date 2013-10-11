#include "Composite.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example3
				{

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