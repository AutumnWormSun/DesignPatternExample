#include "Dep.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example3
				{

					std::string Dep::getDepId()
					{
						return depId;
					}

					void Dep::setDepId(std::string depId)
					{
						this->depId = depId;
					}

					std::string Dep::getDepName()
					{
						return depName;
					}

					void Dep::setDepName(std::string depName)
					{
						this->depName = depName;
					}

					bool Dep::deleteDep()
					{
						//1��Ҫ��ͨ���н���ȥ��������������������صĲ��ź���Ա�Ĺ�ϵ
						DepUserMediatorImpl *mediator = DepUserMediatorImpl::getInstance();
						mediator->deleteDep(depId);
						//2��Ȼ��������������������
						//��ע����ʵ�ʿ����У���Щҵ���ܿ��ܻ�����ҵ���ȥ��
						//����ʵ�ʿ����ж����Ѿ�ʹ�õ�ҵ������ͨ���ǲ��ᱻɾ���ģ�
						//���ǻᱻ��Ϊ��ʷ���ݱ���
						return true;
					}
				}
			}
		}
	}
}