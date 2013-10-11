#include "SubstractCommand.h"

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

					SubstractCommand::SubstractCommand(OperationApi *operation, int opeNum)
					{
						this->operation = operation;
						this->opeNum = opeNum;
					}

					void SubstractCommand::execute()
					{
						//ת��������ȥ����ִ�й��ܣ����������������
						this->operation->substract(opeNum);
					}

					void SubstractCommand::undo()
					{
						//ת��������ȥ����ִ�й���
						//�����������������ô������ʱ��������ӷ���
						this->operation->add(opeNum);
					}
				}
			}
		}
	}
}