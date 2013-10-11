#include "ObjectStructure.h"

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

					void ObjectStructure::handleRequest(Visitor *visitor)
					{
						//����϶���ṹ�еĸ�Ԫ�أ����ܷ���
						//����϶���ṹ���Ѿ�ʵ����Ԫ�صı���
						if(root!=0)
						{
							root->accept(visitor);
						}
					}

					void ObjectStructure::setRoot(Component *ele)
					{
						this->root = ele;
					}
				}
			}
		}
	}
}