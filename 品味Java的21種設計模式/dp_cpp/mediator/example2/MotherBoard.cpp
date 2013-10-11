#include "MotherBoard.h"

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

					void MotherBoard::setCdDriver(CDDriver *cdDriver)
					{
						this->cdDriver = cdDriver;
					}

					void MotherBoard::setCpu(CPU *cpu)
					{
						this->cpu = cpu;
					}

					void MotherBoard::setVideoCard(VideoCard *videoCard)
					{
						this->videoCard = videoCard;
					}

					void MotherBoard::setSoundCard(SoundCard *soundCard)
					{
						this->soundCard = soundCard;
					}

					void MotherBoard::changed(Colleague *colleague)
					{
						if(colleague == cdDriver)
						{
							//��ʾ������ȡ������
							this->opeCDDriverReadData(static_cast<CDDriver*>(colleague));
						}
						else if(colleague == cpu)
						{
							//��ʾCPU��������
							this->opeCPU(static_cast<CPU*>(colleague));
						}
					}

					void MotherBoard::opeCDDriverReadData(CDDriver *cd)
					{
						//1���Ȼ�ȡ������ȡ������
						std::string data = cd->getData();
						//2������Щ���ݴ��ݸ�CPU���д���
						this->cpu->executeData(data);
					}

					void MotherBoard::opeCPU(CPU *cpu)
					{
						//1���Ȼ�ȡCPU������������
						std::string videoData = cpu->getVideoData();
						std::string soundData = cpu->getSoundData();
						//2������Щ���ݴ��ݸ��Կ�������չʾ����
						this->videoCard->showData(videoData);
						this->soundCard->soundData(soundData);
					}
				}
			}
		}
	}
}