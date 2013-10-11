#include "VoteManager.h"

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

					Map<std::string, VoteState*> *VoteManager::getMapState()
					{
						return mapState;
					}

					Map<std::string, std::string> *VoteManager::getMapVote()
					{
						return mapVote;
					}

					Map<std::string, int> *VoteManager::getMapVoteCount()
					{
						return mapVoteCount;
					}

					void VoteManager::vote(std::string user, std::string voteItem) throw(Exception)
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

						VoteState *state = 0;
						//2��ֱ�Ӵ����ݿ��ȡ���û���Ӧ����һ��״̬��״̬����
						std::string stateId = "�����ݿ��л�ȡ���ֵ";
						//��ʼ����״̬�������������õ�״̬����

						//����״̬����ȥ��ȡ��Ӧ����
						std::string className = "����״̬����ȥ��ȡ��Ӧ����";
						//ʹ�÷��䴴������ʵ������ʾ��һ��
						Class *c = Class::forName(className);
						state = static_cast<VoteState*>(c->newInstance());

						if((new std::string("����ͶƱ"))->equals(stateId))
						{
							state = new NormalVoteState();
						}
						else if((new std::string("�ظ�ͶƱ"))->equals(stateId))
						{
							state = new RepeatVoteState();
						}
						else if((new std::string("����ͶƱ"))->equals(stateId))
						{
							state = new SpiteVoteState();
						}
						else if((new std::string("������"))->equals(stateId))
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