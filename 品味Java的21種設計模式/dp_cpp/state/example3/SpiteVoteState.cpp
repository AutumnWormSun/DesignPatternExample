#include "SpiteVoteState.h"

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

					void SpiteVoteState::vote(std::string user, std::string voteItem, VoteManager *voteManager)
					{
						//����ͶƱ
						//ȡ���û���ͶƱ�ʸ񣬲�ȡ��ͶƱ��¼
						std::string s = voteManager->getMapVote()->get(user);
						if(s!="")
						{
							voteManager->getMapVote()->remove(user);
						}
						puts("���ж���ˢƱ��Ϊ��ȡ��ͶƱ�ʸ�");
					}
				}
			}
		}
	}
}