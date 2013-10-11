#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						//1����װ����ͽ�����
						//����������
						OperationApi *operation = new Operation();
						//��������
						AddCommand *addCmd = new AddCommand(5);
						SubstractCommand *substractCmd = new SubstractCommand(3);
						//��װ����ͽ�����
						addCmd->setOperation(operation);
						substractCmd->setOperation(operation);

						//2�����������õ������ߣ����Ǽ���������
						Calculator *calculator = new Calculator();
						calculator->setAddCmd(addCmd);
						calculator->setSubstractCmd(substractCmd);

						//3:ģ�ⰴ�°�ť������һ��
						calculator->addPressed();
						puts("һ�μӷ������Ľ��Ϊ��"+operation->getResult());
						calculator->substractPressed();
						puts("һ�μ��������Ľ��Ϊ��"+operation->getResult());

						//���Գ���
						calculator->undoPressed();
						puts("����һ�κ�Ľ��Ϊ��"+operation->getResult());
						calculator->undoPressed();
						puts("�ٳ���һ�κ�Ľ��Ϊ��"+operation->getResult());

						//���Իָ�
						calculator->redoPressed();
						puts("�ָ�����һ�κ�Ľ��Ϊ��"+operation->getResult());
						calculator->redoPressed();
						puts("�ٻָ�����һ�κ�Ľ��Ϊ��"+operation->getResult());
					}
				}
			}
		}
	}
}