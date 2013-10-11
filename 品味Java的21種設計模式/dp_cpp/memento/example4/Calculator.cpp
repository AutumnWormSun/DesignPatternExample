#include "Calculator.h"

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

					void Calculator::setAddCmd(Command *addCmd)
					{
						this->addCmd = addCmd;
					}

					void Calculator::setSubstractCmd(Command *substractCmd)
					{
						this->substractCmd = substractCmd;
					}

					void Calculator::addPressed()
					{
						//��ȡ��Ӧ�ı���¼���󣬲���������Ӧ����ʷ��¼����
						Memento *m1 = this->addCmd->createMemento();

						//ִ������
						this->addCmd->execute();

						//�Ѳ�����¼����ʷ��¼����
						undoCmds.push_back(this->addCmd);

						//��ȡִ�������ı���¼����
						Memento *m2 = this->addCmd->createMemento();
						//���õ���������ʷ��¼����
						this->undoMementos.push_back(new Memento[]{m1,m2});
					}

					void Calculator::substractPressed()
					{
						//��ȡ��Ӧ�ı���¼���󣬲���������Ӧ����ʷ��¼����		
						Memento *m1 = this->substractCmd->createMemento();

						//ִ������
						this->substractCmd->execute();

						//�Ѳ�����¼����ʷ��¼����
						undoCmds.push_back(this->substractCmd);

						//��ȡִ�������ı���¼����
						Memento *m2 = this->substractCmd->createMemento();
						//���õ���������ʷ��¼����
						this->undoMementos.push_back(new Memento[]{m1,m2});
					}

					void Calculator::undoPressed()
					{
						if(undoCmds.size()>0)
						{
							//ȡ�����һ������������
							Command *cmd = undoCmds.back();
							//��ȡ��Ӧ�ı���¼����
//ORIGINAL LINE: Memento[] ms = undoMementos.get(undoCmds.size()-1);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
							Memento *ms = undoMementos.at(undoCmds.size() - 1);

							//����
							cmd->undo(ms[0]);

							//������лָ��Ĺ��ܣ��ǾͰ���������¼���ָ�����ʷ��¼����
							redoCmds.push_back(cmd);
							//����Ӧ�ı���¼����Ҳ��ӹ�ȥ
							redoMementos.push_back(ms);

							//Ȼ������һ������ɾ������
							undoCmds.remove(cmd);
							//����Ӧ�ı���¼����Ҳɾ����
							undoMementos.remove(ms);
						}
						else
						{
							puts("�ܱ�Ǹ��û�пɳ���������");
						}
					}

					void Calculator::redoPressed()
					{
						if(redoCmds.size()>0)
						{
							//ȡ�����һ������������
							Command *cmd = redoCmds.back();
							//��ȡ��Ӧ�ı���¼����
//ORIGINAL LINE: Memento[] ms = redoMementos.get(redoCmds.size()-1);
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
							Memento *ms = redoMementos.at(redoCmds.size() - 1);

							//����
							cmd->redo(ms[1]);

							//����������¼���ɳ�������ʷ��¼����
							undoCmds.push_back(cmd);
							//����Ӧ�ı���¼����Ҳ��ӹ�ȥ
							undoMementos.push_back(ms);
							//Ȼ������һ������ɾ����
							redoCmds.remove(cmd);
							//����Ӧ�ı���¼����Ҳɾ����
							redoMementos.remove(ms);
						}
						else
						{
							puts("�ܱ�Ǹ��û�пɻָ�������");
						}
					}
				}
			}
		}
	}
}