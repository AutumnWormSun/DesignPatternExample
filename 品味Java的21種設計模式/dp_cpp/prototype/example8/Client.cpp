#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example8
				{

					void Client::main(std::string args[])
					{
						try
						{
							// ��ʼ��ԭ�͹�����
							Prototype *p1 = new ConcretePrototype1();
							PrototypeManager::setPrototype("Prototype1", p1);

							// ��ȡԭ������������
							Prototype *p3 = PrototypeManager::getPrototype("Prototype1")->clone();
							p3->setName("����");
							puts("��һ��ʵ����" + p3);

							// ���˶�̬���л���ʵ��
							Prototype *p2 = new ConcretePrototype2();
							PrototypeManager::setPrototype("Prototype1", p2);

							// ���»�ȡԭ������������
							Prototype *p4 = PrototypeManager::getPrototype("Prototype1")->clone();
							p4->setName("����");
							puts("�ڶ���ʵ����" + p4);

							// ����ע�������ԭ��
							PrototypeManager::removePrototype("Prototype1");

							// �ٴλ�ȡԭ������������
							Prototype *p5 = PrototypeManager::getPrototype("Prototype1")->clone();
							p5->setName("����");
							puts("������ʵ����" + p5);
						}
						catch (Exception *err)
						{
							System::err::println(err->getMessage());
						}
					}
				}
			}
		}
	}
}