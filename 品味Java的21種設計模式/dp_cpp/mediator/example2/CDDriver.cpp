#include "CDDriver.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example2
				{

					CDDriver::CDDriver(Mediator *mediator) : Colleague(mediator)
					{
						InitializeInstanceFields();
					}

					std::string CDDriver::getData()
					{
						return this->data;
					}

					void CDDriver::readCD()
					{
						//����ǰ����Ƶ��ʾ�����ݣ����ź�������
						this->data = "���ģʽ,ֵ�úú��о�";
						//֪ͨ���壬�Լ���״̬�����˸ı�
						this->getMediator()->changed(this);
					}
				}
			}
		}
	}
}