#include "PrintStructVisitor.h"

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

					void PrintStructVisitor::visitComposite(Composite *composite)
					{
						//�Ȱ��Լ����ȥ
						puts(preStr+"+"+composite->getName());
						//��������������������ô�������Щ���������
						if(composite->getChildComponents()!=0)
						{
							//Ȼ�����һ���ո񣬱�ʾ�������һ���ո�
							preStr+=" ";
							//�����ǰ������Ӷ�����
							for (unknown::const_iterator c = composite->getChildComponents().begin(); c != composite->getChildComponents().end(); ++c)
							{
								//�ݹ����ÿ���Ӷ���
								(*c)->accept(this);
							}
							//��ѭ���Ӷ�����������һ���˸��ȥ��
							preStr = preStr.substr(0,preStr.length()-1);
						}
					}

					void PrintStructVisitor::visitLeaf(Leaf *leaf)
					{
						//���ʵ�Ҷ�Ӷ��������		
						puts(preStr+"-"+leaf->getName());
					}
				}
			}
		}
	}
}