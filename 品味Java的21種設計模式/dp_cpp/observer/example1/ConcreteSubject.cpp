#include "ConcreteSubject.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example1
				{

					std::string ConcreteSubject::getSubjectState()
					{
						return subjectState;
					}

					void ConcreteSubject::setSubjectState(std::string subjectState)
					{
						this->subjectState = subjectState;
						//״̬�����˸ı䣬֪ͨ�����۲���
						this->notifyObservers();
					}
				}
			}
		}
	}
}