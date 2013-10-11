#include "VoteManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example3
				{

					Map<std::string, std::string> *VoteManager::getMapVote()
					{
						return mapVote;
					}

					void VoteManager::vote(std::string user, std::string voteItem)
					{
						//1����Ϊ���û�����ͶƱ�Ĵ���
						//�ȴӼ�¼��ȡ�����е�ͶƱ����
						int oldVoteCount = mapVoteCount->get(user);
						if(oldVoteCount==0)
						{
							oldVoteCount = 0;
						}
						oldVoteCount = oldVoteCount + 1;
						mapVoteCount->put(user, oldVoteCount);

						//2���жϸ��û�ͶƱ�����ͣ����൱�����ж϶�Ӧ��״̬
						//����������ͶƱ���ظ�ͶƱ������ͶƱ�����Ϻ�������״̬
						if(oldVoteCount==1)
						{
							state = new NormalVoteState();
						}
						else if(oldVoteCount>1 && oldVoteCount<5)
						{
							state = new RepeatVoteState();
						}
						else if(oldVoteCount >= 5 && oldVoteCount<8)
						{
							state = new SpiteVoteState();
						}
						else if(oldVoteCount>=8)
						{
							state = new BlackVoteState();
						}
						//Ȼ��ת��״̬������������Ӧ�Ĳ���
						state->vote(user, voteItem, this);
					}
				}
			}
		}
	}
}