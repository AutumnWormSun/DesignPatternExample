#include "ConcreteHandler1.h"

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

					void ConcreteHandler1::handleRequest()
					{
						//����ĳЩ�������ж��Ƿ������Լ������ְ��Χ
						//�ж��������磺���ⲿ����Ĳ�����������������ȥ��ȡ���ⲿ���ݣ�
						//������ݿ��л�ȡ�ȣ�������仰ֻ�Ǹ�ʾ��
						bool someCondition = false;

						if(someCondition)
						{
							//��������Լ������ְ��Χ���������ﴦ������
							//����Ĵ������
							puts("ConcreteHandler1 handle request");
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