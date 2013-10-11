#include "PrintNameVisitor.h"

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

					void PrintNameVisitor::visitComposite(Composite *composite)
					{
						//���ʵ���϶��������
						puts("�ڵ㣺"+composite->getName());
					}

					void PrintNameVisitor::visitLeaf(Leaf *leaf)
					{
						//���ʵ�Ҷ�Ӷ��������		
						puts("Ҷ�ӣ�"+leaf->getName());
					}
				}
			}
		}
	}
}