#include "SpiteVoteState.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example5
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

						//����ͶƱ��ɣ�ά����һ��״̬��ͶƱ��8�Σ��ͽ���������
						//ע���������жϴ��ڵ���7����Ϊ�������õ�����һ��״̬
						//��һ��������������8�ˣ���Ӧ�����ǽ���������
						if(voteManager->getMapVoteCount()->get(user) >= 7)
						{
										//			voteManager.getMapState().put(user, new BlackVoteState());
						}
					}
				}
			}
		}
	}
}