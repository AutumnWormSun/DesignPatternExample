#include "NormalVoteState2.h"

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

					void NormalVoteState2::vote(std::string user, std::string voteItem, VoteManager *voteManager)
					{
						//�ȵ������еĹ���
						NormalVoteState::vote(user, voteItem, voteManager);
						//������ֽ�����ʾ��һ��
						puts("��������10��");
					}
				}
			}
		}
	}
}