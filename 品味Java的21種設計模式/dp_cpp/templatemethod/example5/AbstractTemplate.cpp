#include "AbstractTemplate.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace templatemethod
			{
				namespace example5
				{

					void AbstractTemplate::templateMethod()
					{
						//��һ��
						this->operation1();
						//�ڶ���		
						this->operation2();
						//������
						this->doPrimitiveOperation1();
						//���Ĳ�
						this->doPrimitiveOperation2();
						//���岽
						this->hookOperation1();
					}

					void AbstractTemplate::operation1()
					{
						//����������ʵ��
					}

					void AbstractTemplate::operation2()
					{
						//����������ʵ��
					}

					void AbstractTemplate::commonOperation()
					{
						//����������ʵ��
					}

					void AbstractTemplate::hookOperation1()
					{
						//�������ṩȱʡ��ʵ��
					}
				}
			}
		}
	}
}