#include "BlackWarnVoteState.h"

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

					void BlackWarnVoteState::vote(std::string user, std::string voteItem, VoteManager *voteManager)
					{
						//��������������״̬
						puts("��ֹ��¼��ʹ��ϵͳ3��");

						//��������������״̬������ɣ�ά����һ��״̬��ͶƱ��10�Σ��ͽ���������
						//ע���������жϴ��ڵ���9����Ϊ�������õ�����һ��״̬
						//��һ��������������10�ˣ���Ӧ�����ǽ���������
						if(voteManager->getMapVoteCount()->get(user) >= 9)
						{
							voteManager->getMapState()->put(user, new BlackVoteState());
						}
					}
				}
			}
		}
	}
}