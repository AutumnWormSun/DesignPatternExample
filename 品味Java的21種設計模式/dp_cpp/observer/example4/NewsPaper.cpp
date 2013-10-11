#include "NewsPaper.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example4
				{

					std::string NewsPaper::getContent()
					{
						return content;
					}

					void NewsPaper::setContent(std::string content)
					{
						this->content = content;
						//�������ˣ�˵���ֳ���ֽ�ˣ��Ǿ�֪ͨ���еĶ���
						//ע������Java�е�Observerģʽ��ʱ����仰������
						this->setChanged();
						//Ȼ������֪ͨ�������õ����Ƶķ�ʽ
						this->notifyObservers(this->content);
						//��������ķ�ʽ����ô����
						//this.notifyObservers();
					}
				}
			}
		}
	}
}