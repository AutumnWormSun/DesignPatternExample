#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example2
				{

					void Client::main(std::string args[])
					{
						//׼�����������
						Collection<Customer*> *colCustomer = preparedTestData();
						//ѭ���Կͻ����в���
						for (Collection<Customer*>::const_iterator cm = colCustomer->begin(); cm != colCustomer->end(); ++cm)
						{
							//����ƫ�÷���
							(*cm)->predilectionAnalyze();
							//���м�ֵ����
							(*cm)->worthAnalyze();
						}
					}

					Collection<Customer*> *Client::preparedTestData()
					{
						Collection<Customer*> *colCustomer = std::vector<Customer*>();
						//Ϊ�˲��Է��㣬׼��������
						Customer *cm1 = new EnterpriseCustomer();
						cm1->setName("ABC����");
						colCustomer->add(cm1);

						Customer *cm2 = new EnterpriseCustomer();
						cm2->setName("CDE��˾");
						colCustomer->add(cm2);

						Customer *cm3 = new PersonalCustomer();
						cm3->setName("����");
						colCustomer->add(cm3);

						return colCustomer;
					}
				}
			}
		}
	}
}