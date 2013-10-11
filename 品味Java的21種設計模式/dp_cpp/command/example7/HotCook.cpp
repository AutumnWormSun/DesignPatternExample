#include "HotCook.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example7
				{

					HotCook::HotCook(std::string name)
					{
						this->name = name;
					}

					void HotCook::cook(int tableNum, std::string name)
					{
						//ÿ�����˵�ʱ���ǲ�һ���ģ��ø��������ģ��һ��
						int cookTime = static_cast<int>(20 * Math::random());
						puts(this->name+"��ʦ����Ϊ"+tableNum+"��������"+name);
						try
						{
							//���߳���Ϣ��ô��ʱ�䣬��ʾ��������
							delay(cookTime);
						}
						catch (InterruptedException *e)
						{
							e->printStackTrace();
						}
						puts(this->name+"��ʦΪ"+tableNum+"���������ˣ�"+name+",���ƺ�ʱ="+cookTime+"��");
					}

					void HotCook::run()
					{
						while(true)
						{
							//��������������ȡ�������
							Command *cmd = CommandQueue::getOneCommand();
							if(cmd != 0)
							{
								//˵��ȡ����������ˣ�����������û�����ý�����
								//��Ϊǰ�涼����֪��������һ����ʦ������ִ���������
								//����֪���ˣ����ǵ�ǰ��ʦʵ�������õ������������
								cmd->setCookApi(this);
								//Ȼ������ִ���������
								cmd->execute();
							}
							//��Ϣ1��
							try
							{
								delay(1000L);
							}
							catch (InterruptedException *e)
							{
								e->printStackTrace();
							}

						}
					}
				}
			}
		}
	}
}