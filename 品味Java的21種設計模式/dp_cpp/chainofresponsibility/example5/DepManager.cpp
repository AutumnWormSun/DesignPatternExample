#include "DepManager.h"

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

					object *DepManager::handleRequest(RequestModel *rm)
					{
						if(FeeRequestModel::FEE_TYPE.equals(rm->getType()))
						{
							return handleFeeRequest(rm);
						}
						else
						{
							return Handler::handleRequest(rm);
						}
					}

					object *DepManager::handleFeeRequest(RequestModel *rm)
					{
						//�Ȱ�ͨ�õĶ������ͻ���
						FeeRequestModel *frm = static_cast<FeeRequestModel*>(rm);
						std::string str = "";
						//���ž����Ȩ��ֻ����1000����
						if(frm->getFee() < 1000)
						{
							//Ϊ�˲��ԣ��򵥵㣬ֻͬ��С�������
							if((new std::string("С��"))->equals(frm->getUser()))
							{
								str = "���ž���ͬ��"+frm->getUser()+"�۲ͷ���"+frm->getFee()+"Ԫ������";
							}
							else
							{
								//������һ�ɲ�ͬ��
								str = "���ž���ͬ��"+frm->getUser()+"�۲ͷ���"+frm->getFee()+"Ԫ������";
							}
							return str;
						}
						else
						{
							//����1000���������ݸ�������ߵ��˴���
							if(this->successor!=0)
							{
								return this->successor->handleRequest(rm);
							}
						}
						return str;
					}
				}
			}
		}
	}
}