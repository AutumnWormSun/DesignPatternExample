#include "VoteManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example4
				{

					Map<std::string, std::string> *VoteManager::getMapVote()
					{
						return mapVote;
					}

					Map<std::string, VoteState*> *VoteManager::getMapState()
					{
						return mapState;
					}

					Map<std::string, int> *VoteManager::getMapVoteCount()
					{
						return mapVoteCount;
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

						//2����ȡ���û���ͶƱ״̬
						VoteState *state = mapState->get(user);
						//���û��ͶƱ״̬��˵����û��Ͷ��Ʊ���ͳ�ʼ��һ������ͶƱ״̬
						if(state==0)
						{
							state = new NormalVoteState();
						}

						//Ȼ��ת��״̬������������Ӧ�Ĳ���
						state->vote(user, voteItem, this);
					}
				}
			}
		}
	}
}