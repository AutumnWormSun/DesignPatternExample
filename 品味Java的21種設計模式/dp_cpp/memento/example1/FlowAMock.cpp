#include "FlowAMock.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example1
				{

					FlowAMock::FlowAMock(std::string flowName)
					{
						this->flowName = flowName;
					}

					std::string FlowAMock::getTempState()
					{
						return tempState;
					}

					void FlowAMock::setTempState(std::string tempState)
					{
						this->tempState = tempState;
					}

					int FlowAMock::getTempResult()
					{
						return tempResult;
					}

					void FlowAMock::setTempResult(int tempResult)
					{
						this->tempResult = tempResult;
					}

					void FlowAMock::runPhaseOne()
					{
						//������׶Σ����ܲ������м�����ʾ��һ��
						tempResult = 3;
						tempState = "PhaseOne";
					}

					void FlowAMock::schema1()
					{
						//ʾ�⣬��Ҫʹ�õ�һ���׶β���������
						this->tempState += ",Schema1";
						puts(this->tempState + " : now run "+tempResult);
						this->tempResult += 11;
					}

					void FlowAMock::schema2()
					{
						//ʾ�⣬��Ҫʹ�õ�һ���׶β���������
						this->tempState += ",Schema2";
						puts(this->tempState + " : now run "+tempResult);
						this->tempResult += 22;
					}
				}
			}
		}
	}
}