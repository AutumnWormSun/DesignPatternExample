#include "VoteManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace state
			{
				namespace example1
				{

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

						//2���жϸ��û�ͶƱ�����ͣ�����������ͶƱ���ظ�ͶƱ������ͶƱ�����Ϻ�����
						//Ȼ�����ͶƱ������������Ӧ�Ĳ���	
						if(oldVoteCount==1)
						{
							//����ͶƱ
							//��¼��ͶƱ��¼��
							mapVote->put(user, voteItem);
							puts("��ϲ��ͶƱ�ɹ�");
						}
						else if(oldVoteCount>1 && oldVoteCount<5)
						{
							//�ظ�ͶƱ
							//��ʱ��������
							puts("�벻Ҫ�ظ�ͶƱ");
						}
						else if(oldVoteCount >= 5 && oldVoteCount<8)
						{
							//����ͶƱ
							//ȡ���û���ͶƱ�ʸ񣬲�ȡ��ͶƱ��¼
							std::string s = mapVote->get(user);
							if(s!="")
							{
								mapVote->remove(user);
							}
							puts("���ж���ˢƱ��Ϊ��ȡ��ͶƱ�ʸ�");
						}
						else if(oldVoteCount>=8)
						{
							//������
							//����������У���ֹ��¼ϵͳ��
							puts("���������������ֹ��¼��ʹ�ñ�ϵͳ");
						}
					}
				}
			}
		}
	}
}