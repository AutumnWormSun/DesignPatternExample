#include "AddCommand.h"

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

					AddCommand::AddCommand(OperationApi *operation, int opeNum)
					{
						this->operation = operation;
						this->opeNum = opeNum;
					}

					void AddCommand::execute()
					{
						//ת��������ȥ����ִ�й��ܣ�������������ӷ�
						this->operation->add(opeNum);
					}

					void AddCommand::undo()
					{
						//ת��������ȥ����ִ�й���
						//����������ӷ�����ô������ʱ�������������
						this->operation->substract(opeNum);
					}
				}
			}
		}
	}
}