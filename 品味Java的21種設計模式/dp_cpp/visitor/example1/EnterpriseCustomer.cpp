#include "EnterpriseCustomer.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace visitor
			{
				namespace example1
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
				}
			}
		}
	}
}