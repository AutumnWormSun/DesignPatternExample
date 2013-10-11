#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace observer
			{
				namespace example5
				{

					void Client::main(std::string args[])
					{
						//����ˮ���������
						WaterQuality *subject = new WaterQuality();
						//���������۲���
						WatcherObserver *watcher1 = new Watcher();
						watcher1->setJob("�����Ա");
						WatcherObserver *watcher2 = new Watcher();
						watcher2->setJob("Ԥ����Ա");
						WatcherObserver *watcher3 = new Watcher();
						watcher3->setJob("��ⲿ���쵼");
						//ע��۲���
						subject->attach(watcher1);
						subject->attach(watcher2);
						subject->attach(watcher3);

						//��дˮ�ʱ���
						puts("��ˮ��Ϊ������ʱ��------------------��");
						subject->setPolluteLevel(0);
						puts("��ˮ��Ϊ�����Ⱦ��ʱ��---------------��");
						subject->setPolluteLevel(1);
						puts("��ˮ��Ϊ�ж���Ⱦ��ʱ��---------------��");
						subject->setPolluteLevel(2);
					}
				}
			}
		}
	}
}