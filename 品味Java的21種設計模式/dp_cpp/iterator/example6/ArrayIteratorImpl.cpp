#include "ArrayIteratorImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example6
				{

					ArrayIteratorImpl::ArrayIteratorImpl(SalaryManager *aggregate)
					{
						//�������ȶԾۺ϶�������ݽ��й��ˣ����繤�ʱ�����3000����
						Collection<PayModel*> *tempCol = std::vector<PayModel*>();
						for (unknown::const_iterator pm = aggregate->getPays()->begin(); pm != aggregate->getPays()->end(); ++pm)
						{
							if((*pm)->getPay() < 3000)
							{
								tempCol->add(*pm);
							}
						}
						//Ȼ��ѷ���Ҫ������ݴ�ŵ���������������
						this->pms = new PayModel[tempCol->size()];
						int i=0;
						for (Collection<PayModel*>::const_iterator pm = tempCol->begin(); pm != tempCol->end(); ++pm)
						{
							this->pms[i] = *pm;
							i++;
						}
					}

					bool ArrayIteratorImpl::hasNext()
					{
						//�ж��Ƿ�����һ��Ԫ��
						if(pms!=0 && index<=(sizeof(pms) / sizeof(pms[0])-1))
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
							retObj = pms[index];
							//ÿȡ��һ��ֵ���Ͱ��ѷ���������1
							index++;
						}

						//�������Ҫ���ص����ݽ��й��ˣ����粻�ò鿴��������
						(static_cast<PayModel*>(retObj))->setPay(0.0);

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