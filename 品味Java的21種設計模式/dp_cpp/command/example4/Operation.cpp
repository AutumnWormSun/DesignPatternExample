#include "Operation.h"

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

					int Operation::getResult()
					{
						return result;
					}

					void Operation::setResult(int result)
					{
						this->result = result;
					}

					void Operation::add(int num)
					{
						//ʵ�ּӷ�����
						result += num;
					}

					void Operation::substract(int num)
					{
						//ʵ�ּ�������
						result -= num;
					}
				}
			}
		}
	}
}