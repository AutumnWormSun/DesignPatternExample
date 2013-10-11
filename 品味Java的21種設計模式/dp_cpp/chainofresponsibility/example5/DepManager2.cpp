#include "DepManager2.h"

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

					object *DepManager2::handleRequest(RequestModel *request)
					{
						if(PreFeeRequestModel::FEE_TYPE.equals(request->getType()))
						{
							//��ʾԤ֧���÷�������
							return myHandler(request);
						}
						else
						{
							//�������ø���ȥ����
							return DepManager::handleRequest(request);
						}
					}

					object *DepManager2::myHandler(RequestModel *request)
					{
						//�Ȱ�ͨ�õĶ������ͻ���
						PreFeeRequestModel *fr = static_cast<PreFeeRequestModel*>(request);
						//���ž����Ȩ�ޱȽ�С��ֻ����20000����
						if(fr->getFee() < 20000)
						{
							//������Ҫ�ͳͳͬ��
							puts("���ž���ͬ��"+fr->getUser()+"Ԥ֧���÷���"+fr->getFee()+"Ԫ������");
							return true;
						}
						else
						{
							//����20000���������ݸ�������ߵ��˴���
							if(this->successor != 0)
							{
								return this->successor->handleRequest(request);
							}
						}
						return false;
					}
				}
			}
		}
	}
}