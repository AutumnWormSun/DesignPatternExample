#include "ProjectManager.h"

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

					object *ProjectManager::handleRequest(RequestModel *rm)
					{
						if(FeeRequestModel::FEE_TYPE.equals(rm->getType()))
						{
							//��ʾ�۲ͷ�������
							return handleFeeRequest(rm);
						}
						else
						{
							//��������Ŀ������ʱ���봦��
							return Handler::handleRequest(rm);
						}
					}

					object *ProjectManager::handleFeeRequest(RequestModel *rm)
					{
						//�Ȱ�ͨ�õĶ������ͻ���
						FeeRequestModel *frm = static_cast<FeeRequestModel*>(rm);
						std::string str = "";
						//��Ŀ�����Ȩ�ޱȽ�С��ֻ����500����
						if(frm->getFee() < 500)
						{
							//Ϊ�˲��ԣ��򵥵㣬ֻͬ��С���
							if((new std::string("С��"))->equals(frm->getUser()))
							{
								str = "��Ŀ����ͬ��"+frm->getUser()+"�۲ͷ���"+frm->getFee()+"Ԫ������";
							}
							else
							{
								//������һ�ɲ�ͬ��
								str = "��Ŀ����ͬ��"+frm->getUser()+"�۲ͷ���"+frm->getFee()+"Ԫ������";
							}
							return str;
						}
						else
						{
							//����500���������ݸ�������ߵ��˴���
							if(this->successor!=0)
							{
								return successor->handleRequest(rm);
							}
						}
						return str;
					}
				}
			}
		}
	}
}