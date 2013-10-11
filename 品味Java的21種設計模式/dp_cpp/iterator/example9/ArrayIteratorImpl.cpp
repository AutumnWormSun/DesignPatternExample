#include "ArrayIteratorImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example9
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

					bool ArrayIteratorImpl::hasPrevious()
					{
						if(pms!=0 && index > 0)
						{
							return true;
						}
						return false;
					}

					Collection *ArrayIteratorImpl::getPage(int pageNum, int pageShow)
					{
						Collection *col = std::vector();
						//��Ҫ�������ȼ�����Ҫ��ȡ�����ݵĿ�ʼ�����ͽ�������
						int start = (pageNum-1)*pageShow;
						int end = start + pageShow-1;
						//����start�ı߽磬��С��0
						if(start < 0)
						{
							start = 0;
						}
						//����end�ı߽磬�����������������
						if(end > sizeof(this->pms) / sizeof(this->pms[0])-1)
						{
							end = sizeof(this->pms) / sizeof(this->pms[0]) - 1;
						}
						//ÿ��ȡֵ���Ǵ�ͷ��ʼѭ������������indexΪ0
						index = 0;
						while(hasNext() && index<=end)
						{
							if(index >= start)
							{
								col->add(pms[index]);
							}
							//���ѷ���������1
							index++;
						}
						return col;
					}
				}
			}
		}
	}
}