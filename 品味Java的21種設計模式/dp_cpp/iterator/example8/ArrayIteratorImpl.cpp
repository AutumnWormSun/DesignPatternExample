#include "ArrayIteratorImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example8
				{

					ArrayIteratorImpl::ArrayIteratorImpl(SalaryManager *aggregate)
					{
						this->pms = aggregate->getPays();
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

					Collection *ArrayIteratorImpl::next(int num)
					{
						Collection *col = std::vector();
						int count=0;
						while(hasNext() && count<num)
						{
							col->add(pms[index]);
							//ÿȡ��һ��ֵ���Ͱ��ѷ���������1
							index++;
							count++;
						}
						return col;
					}

					bool ArrayIteratorImpl::hasPrevious()
					{
						if(pms!=0 && index > 0)
						{
							return true;
						}
						return false;
					}

					Collection *ArrayIteratorImpl::previous(int num)
					{
						Collection *col = std::vector();
						int count=0;
						//�򵥵�ʵ�־��ǰ������˻�ȥnum����Ȼ����ȡֵ��
						//����ʵ������ʵ�����п��ܶ��˻�ȥ���ݵģ����磺�Ѿ��������һҳ���������һҳ�����ݲ���һҳ�����ݣ���ô�˻�ȥnum���������˶���
						//Ϊ��ʾ���ļ���ԣ�����Ͳ�ȥ������
						index = index - num;
						while(hasPrevious() && count<num)
						{
							col->add(pms[index]);
							index ++;
							count++;
						}
						return col;
					}
				}
			}
		}
	}
}