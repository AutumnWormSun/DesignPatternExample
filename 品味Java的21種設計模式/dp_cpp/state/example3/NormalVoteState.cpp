#include "NormalVoteState.h"

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

					void NormalVoteState::vote(std::string user, std::string voteItem, VoteManager *voteManager)
					{
						//����ͶƱ
						//��¼��ͶƱ��¼��
						voteManager->getMapVote()->put(user, voteItem);
						puts("��ϲ��ͶƱ�ɹ�");
					}
				}
			}
		}
	}
}