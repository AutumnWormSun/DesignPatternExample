#include "EnterpriseCustomer.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example2
				{

					std::string EnterpriseCustomer::getLinkman()
					{
						return linkman;
					}

					void EnterpriseCustomer::setLinkman(std::string linkman)
					{
						this->linkman = linkman;
					}

					std::string EnterpriseCustomer::getLinkTelephone()
					{
						return linkTelephone;
					}

					void EnterpriseCustomer::setLinkTelephone(std::string linkTelephone)
					{
						this->linkTelephone = linkTelephone;
					}

					std::string EnterpriseCustomer::getRegisterAddress()
					{
						return registerAddress;
					}

					void EnterpriseCustomer::setRegisterAddress(std::string registerAddress)
					{
						this->registerAddress = registerAddress;
					}

					void EnterpriseCustomer::serviceRequest()
					{
						//��ҵ�ͻ�����ľ����������
						puts(this->getName()+"��ҵ�����������");
					}

					void EnterpriseCustomer::predilectionAnalyze()
					{
						//���ݹ����������ʷ��Ǳ�ڹ�������
						//�Լ��ͻ�������ҵ�ķ�չ���ơ��ͻ��ķ�չԤ�ڵȵķ���
						puts("���ڶ���ҵ�ͻ�"+this->getName()+"���в�Ʒƫ�÷���");
					}

					void EnterpriseCustomer::worthAnalyze()
					{
						//���ݹ���Ľ���С������Ĳ�Ʒ�ͷ���Ķ��١������Ƶ�ʵȽ��з���
						//��ҵ�ͻ��ı�׼��ȸ��˿ͻ��ĸ�
						puts("���ڶ���ҵ�ͻ�"+this->getName()+"���м�ֵ����");
					}
				}
			}
		}
	}
}