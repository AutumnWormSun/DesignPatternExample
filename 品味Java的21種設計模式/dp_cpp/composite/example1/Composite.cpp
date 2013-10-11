#include "Composite.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace composite
			{
				namespace example1
				{

					Composite::Composite(std::string name)
					{
						InitializeInstanceFields();
						this->name = name;
					}

					void Composite::addComposite(Composite *c)
					{
						this->childComposite->add(c);
					}

					void Composite::addLeaf(Leaf *leaf)
					{
						this->childLeaf->add(leaf);
					}

					void Composite::printStruct(std::string preStr)
					{
						//�Ȱ��Լ����ȥ
						puts(preStr+"+"+this->name);
						//Ȼ�����һ���ո񣬱�ʾ�������һ���ո�����Լ�������Ҷ�Ӷ���
						preStr+=" ";
						for (Collection<Leaf*>::const_iterator leaf = childLeaf->begin(); leaf != childLeaf->end(); ++leaf)
						{
							(*leaf)->printStruct(preStr);
						}
						//�����ǰ������Ӷ�����
						for (Collection<Composite*>::const_iterator c = childComposite->begin(); c != childComposite->end(); ++c)
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