#include "ConcreteHandler2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example2
				{

					void ConcreteHandler2::handleRequest()
					{
						//����ĳЩ�������ж��Ƿ������Լ������ְ��Χ
						//�ж��������磺���ⲿ����Ĳ�����������������ȥ��ȡ���ⲿ���ݣ�
						//������ݿ��л�ȡ�ȣ�������仰ֻ�Ǹ�ʾ��
						bool someCondition = true;

						if(someCondition)
						{
							//��������Լ������ְ��Χ���������ﴦ������

							//����Ĵ������
							puts("ConcreteHandler2 handle request");
						}
						else
						{
							//����������Լ������ְ��Χ���Ǿ��ж��Ƿ��к�̵�ְ�����
							//����У���ת���������̵�ְ�����
							//���û�У�ʲô����������Ȼ����
							if(this->successor!=0)
							{
								this->successor->handleRequest();
							}
						}
					}
				}
			}
		}
	}
}