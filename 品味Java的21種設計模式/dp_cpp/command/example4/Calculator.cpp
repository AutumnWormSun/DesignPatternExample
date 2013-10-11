#include "Calculator.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
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
						this->addCmd->execute();
						//�Ѳ�����¼����ʷ��¼����
						undoCmds.push_back(this->addCmd);
					}

					void Calculator::substractPressed()
					{
						this->substractCmd->execute();
						//�Ѳ�����¼����ʷ��¼����
						undoCmds.push_back(this->substractCmd);
					}

					void Calculator::undoPressed()
					{
						if(this->undoCmds.size()>0)
						{
							//ȡ�����һ������������
							Command *cmd = this->undoCmds.back();
							cmd->undo();
							//������лָ��Ĺ��ܣ��ǾͰ���������¼���ָ�����ʷ��¼����
							this->redoCmds.push_back(cmd);
							//Ȼ������һ������ɾ������
							this->undoCmds.remove(cmd);
						}
						else
						{
							puts("�ܱ�Ǹ��û�пɳ���������");
						}
					}

					void Calculator::redoPressed()
					{
						if(this->redoCmds.size()>0)
						{
							//ȡ�����һ������������
							Command *cmd = this->redoCmds.back();
							cmd->execute();
							//����������¼���ɳ�������ʷ��¼����
							this->undoCmds.push_back(cmd);
							//Ȼ������һ������ɾ����
							this->redoCmds.remove(cmd);
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