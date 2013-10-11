#include "ArrayIteratorImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example5
				{

					ArrayIteratorImpl::ArrayIteratorImpl(SalaryManager *aggregate)
					{
						this->aggregate = aggregate;
					}

					bool ArrayIteratorImpl::hasNext()
					{
						//�ж��Ƿ�����һ��Ԫ��
						if(aggregate!=0 && index<aggregate->size())
						{
							return true;
						}
						return false;
					}

					object *ArrayIteratorImpl::next()
					{
						object *retObj = 0;
						if(hasNext())
						{
							retObj = aggregate->get(index);
							//ÿȡ��һ��ֵ���Ͱ��ѷ���������1
							index++;
						}
						return retObj;
					}

					void ArrayIteratorImpl::remove()
					{
						//��ʱ���Բ�ʵ��		
					}
				}
			}
		}
	}
}