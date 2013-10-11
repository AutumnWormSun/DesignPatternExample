#include "ObjectStructure.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example4
				{

					void ObjectStructure::handleRequest(Visitor *visitor)
					{
						//ѭ������ṹ�е�Ԫ�أ����ܷ���
						for (Collection<Customer*>::const_iterator cm = col->begin(); cm != col->end(); ++cm)
						{
							(*cm)->accept(visitor);
						}
					}

					void ObjectStructure::addElement(Customer *ele)
					{
						this->col->add(ele);
					}
				}
			}
		}
	}
}