#include "GeneralManager2.h"

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

					object *GeneralManager2::handleRequest(RequestModel *rm)
					{
						if(PreFeeRequestModel::FEE_TYPE.equals(rm->getType()))
						{
							//��ʾԤ֧���÷�������
							return myHandler(rm);
						}
						else
						{
							//�������ø���ȥ����
							return GeneralManager::handleRequest(rm);
						}
					}

					object *GeneralManager2::myHandler(RequestModel *rm)
					{
						//�Ȱ�ͨ�õĶ������ͻ���
						PreFeeRequestModel *frm = static_cast<PreFeeRequestModel*>(rm);
						if(frm->getFee() >= 5000)
						{
							//������Ҫ�ͳͳͬ��
							puts("�ܾ���ͬ��"+frm->getUser()+"Ԥ֧���÷���"+frm->getFee()+"Ԫ������");
							return true;
						}
						else
						{
							//������к�̵Ĵ�����󣬼�������
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