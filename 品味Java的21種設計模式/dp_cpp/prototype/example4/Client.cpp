#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						//�ȴ���ԭ��ʵ��
						OrderApi *oa1 = new PersonalOrder();

						//����ԭ��ʵ���Ķ���������ֵ
						oa1->setOrderProductNum(100);
						//Ϊ�˼򵥣���������������
						puts("���ǵ�һ�λ�ȡ�Ķ���ʵ��==="+oa1->getOrderProductNum());

						//ͨ����¡����ȡ�µ�ʵ��
						OrderApi *oa2 = static_cast<OrderApi*>(oa1->cloneOrder());
						//�޸���������
						oa2->setOrderProductNum(80);
						//�����¡�����Ķ����ֵ
						puts("�����¡������ʵ��==="+oa2->getOrderProductNum());

						//�ٴ����ԭ��ʵ����ֵ
						puts("�ٴ����ԭ��ʵ��==="+oa1->getOrderProductNum());
					}
				}
			}
		}
	}
}