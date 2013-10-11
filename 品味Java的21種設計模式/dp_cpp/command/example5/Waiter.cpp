#include "Waiter.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example5
				{

					void Waiter::orderDish(Command *cmd)
					{
						//�ͻ������������������û�кͽ�������װ��
						//��������װ��
						CookApi *hotCook = new HotCook();
						CookApi *coolCook = new CoolCook();
						//�ж��������������ʦ�������Ȳ�ʦ��
						//�򵥵���������ԭʼ������������ж�
						if(dynamic_cast<DuckCommand*>(cmd) != 0)
						{
							(static_cast<DuckCommand*>(cmd))->setCookApi(hotCook);
						}
						else if(dynamic_cast<ChopCommand*>(cmd) != 0)
						{
							(static_cast<ChopCommand*>(cmd))->setCookApi(hotCook);
						}
						else if(dynamic_cast<PorkCommand*>(cmd) != 0)
						{
							//���Ǹ����ˣ�����Ҫ������˵�ʦ��
							(static_cast<PorkCommand*>(cmd))->setCookApi(coolCook);
						}
						//��ӵ��˵���
						menuCommand->addCommand(cmd);
					}

					void Waiter::orderOver()
					{
						this->menuCommand->execute();
					}
				}
			}
		}
	}
}