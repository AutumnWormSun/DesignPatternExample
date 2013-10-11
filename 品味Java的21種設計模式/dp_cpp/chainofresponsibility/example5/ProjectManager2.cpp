#include "ProjectManager2.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example5
				{

					object *ProjectManager2::handleRequest(RequestModel *rm)
					{
						if(PreFeeRequestModel::FEE_TYPE.equals(rm->getType()))
						{
							//��ʾԤ֧���÷�������
							return myHandler(rm);
						}
						else
						{
							//�������ø���ȥ����
							return ProjectManager::handleRequest(rm);
						}
					}

					object *ProjectManager2::myHandler(RequestModel *rm)
					{
						//�Ȱ�ͨ�õĶ������ͻ���
						PreFeeRequestModel *frm = static_cast<PreFeeRequestModel*>(rm);
						//��Ŀ�����Ȩ�ޱȽ�С��ֻ����5000����
						if(frm->getFee() < 5000)
						{
							//������Ҫ�ͳͳͬ��
							puts("��Ŀ����ͬ��"+frm->getUser()+"Ԥ֧���÷���"+frm->getFee()+"Ԫ������");
							return true;
						}
						else
						{
							//����5000���������ݸ�������ߵ��˴���
							if(this->successor!=0)
							{
								return this->successor->handleRequest(rm);
							}
						}
						return false;
					}
				}
			}
		}
	}
}