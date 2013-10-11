#include "DepUserMediatorImpl.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace mediator
			{
				namespace example3
				{

					DepUserMediatorImpl::DepUserMediatorImpl()
					{
						//���ó�ʼ���������ݵĹ���
						InitializeInstanceFields();
						initTestData();
					}

					DepUserMediatorImpl *DepUserMediatorImpl::getInstance()
					{
						return mediator;
					}

					void DepUserMediatorImpl::initTestData()
					{
						//׼��һЩ��������
						DepUserModel *du1 = new DepUserModel();
						du1->setDepUserId("du1");
						du1->setDepId("d1");
						du1->setUserId("u1");
						depUserCol->add(du1);

						DepUserModel *du2 = new DepUserModel();
						du2->setDepUserId("du2");
						du2->setDepId("d1");
						du2->setUserId("u2");
						depUserCol->add(du2);

						DepUserModel *du3 = new DepUserModel();
						du3->setDepUserId("du3");
						du3->setDepId("d2");
						du3->setUserId("u3");
						depUserCol->add(du3);

						DepUserModel *du4 = new DepUserModel();
						du4->setDepUserId("du4");
						du4->setDepId("d2");
						du4->setUserId("u4");
						depUserCol->add(du4);

						DepUserModel *du5 = new DepUserModel();
						du5->setDepUserId("du5");
						du5->setDepId("d2");
						du5->setUserId("u1");
						depUserCol->add(du5);
					}

					bool DepUserMediatorImpl::deleteDep(std::string depId)
					{
						//��ע�⣺Ϊ����ʾ�򵥣����ų�����ԭ���ŵ���Ա��ô����Ⱥ���ҵ��������Ͳ�����

						//1������¼���ź���Ա��ϵ�ļ������棬Ѱ�Ҹ����������ص���Ա
						//����һ����ʱ�ļ��ϣ���¼��Ҫ����Ĺ�ϵ����
						Collection<DepUserModel*> *tempCol = std::vector<DepUserModel*>();
						for (Collection<DepUserModel*>::const_iterator du = depUserCol->begin(); du != depUserCol->end(); ++du)
						{
							if((*du)->getDepId()->equals(depId))
							{
								//2����Ҫ�������صļ�¼ȥ�����ȼ�¼����
								tempCol->add(*du);
							}
						}
						//3���ӹ�ϵ���������������Щ��ϵ
						depUserCol->removeAll(tempCol);

						return true;
					}

					bool DepUserMediatorImpl::deleteUser(std::string userId)
					{
						//1������¼���ź���Ա��ϵ�ļ������棬Ѱ�Ҹ������Ա��صĲ���
						//����һ����ʱ�ļ��ϣ���¼��Ҫ����Ĺ�ϵ����
						Collection<DepUserModel*> *tempCol = std::vector<DepUserModel*>();
						for (Collection<DepUserModel*>::const_iterator du = depUserCol->begin(); du != depUserCol->end(); ++du)
						{
							if((*du)->getUserId()->equals(userId))
							{
								//2����Ҫ�������صļ�¼ȥ�����ȼ�¼����
								tempCol->add(*du);
							}
						}
						//3���ӹ�ϵ���������������Щ��ϵ
						depUserCol->removeAll(tempCol);

						return true;
					}

					void DepUserMediatorImpl::showDepUsers(Dep *dep)
					{
						for (Collection<DepUserModel*>::const_iterator du = depUserCol->begin(); du != depUserCol->end(); ++du)
						{
							if((*du)->getDepId()->equals(dep->getDepId()))
							{
								puts("���ű��="+dep->getDepId()+"����ӵ����Ա�������ǣ�"+(*du)->getUserId());
							}
						}
					}

					void DepUserMediatorImpl::showUserDeps(User *user)
					{
						for (Collection<DepUserModel*>::const_iterator du = depUserCol->begin(); du != depUserCol->end(); ++du)
						{
							if((*du)->getUserId()->equals(user->getUserId()))
							{
								puts("��Ա���="+user->getUserId()+"���ڲ��ű���ǣ�"+(*du)->getDepId());
							}
						}
					}

					bool DepUserMediatorImpl::changeDep(std::string userId, std::string oldDepId, std::string newDepId)
					{
						//��ʾ����ȥʵ����
						return false;
					}

					bool DepUserMediatorImpl::joinDep(Collection<std::string> *colDepIds, Dep *newDep)
					{
						//��ʾ����ȥʵ����		
						return false;
					}
				}
			}
		}
	}
}