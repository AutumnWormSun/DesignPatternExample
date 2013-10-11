#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example7
				{

					void Client::main(std::string args[])
					{
						//�ȴ���ԭ��ʵ��
						PersonalOrder *oa1 = new PersonalOrder();

						//����ԭ��ʵ����ֵ
						Product *product = new Product();
						product->setName("��Ʒ1");
						oa1->setProduct(product);
						oa1->setOrderProductNum(100);

						puts("���ǵ�һ�λ�ȡ�Ķ���ʵ��="+oa1);

						//ͨ����¡����ȡ�µ�ʵ��
						PersonalOrder *oa2 = static_cast<PersonalOrder*>(oa1->clone());
						//�޸�����ֵ
						oa2->getProduct()->setName("��Ʒ2");
						oa2->setOrderProductNum(80);
						//�����¡�����Ķ����ֵ
						puts("�����¡������ʵ��="+oa2);

						//�ٴ����ԭ��ʵ����ֵ
						puts("�ٴ����ԭ��ʵ��="+oa1);
					}
				}
			}
		}
	}
}