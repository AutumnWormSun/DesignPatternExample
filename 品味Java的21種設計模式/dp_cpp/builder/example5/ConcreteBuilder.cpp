#include "ConcreteBuilder.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example5
				{

					ConcreteBuilder::ConcreteBuilder(std::string contractId, long long beginDate, long long endDate)
					{
						this->contractId = contractId;
						this->beginDate = beginDate;
						this->endDate = endDate;
					}

					ConcreteBuilder *ConcreteBuilder::setPersonName(std::string personName)
					{
						this->personName = personName;
						return this;
					}

					ConcreteBuilder *ConcreteBuilder::setCompanyName(std::string companyName)
					{
						this->companyName = companyName;
						return this;
					}

					ConcreteBuilder *ConcreteBuilder::setOtherData(std::string otherData)
					{
						this->otherData = otherData;
						return this;
					}

					InsuranceContract *ConcreteBuilder::build()
					{
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						if(contractId == "" || contractId.trim()->length()==0)
						{
							throw new IllegalArgumentException("��ͬ��Ų���Ϊ��");
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						bool signPerson = personName!="" && personName.trim()->length()>0;
//JAVA TO C++ CONVERTER TODO TASK: There is no direct native C++ equivalent to the Java String 'trim' method:
						bool signCompany = companyName!="" && companyName.trim()->length()>0;
						if(signPerson && signCompany)
						{
							throw new IllegalArgumentException("һ�ݱ��պ�ͬ����ͬʱ���˺͹�˾ǩ��");
						}
						if(signPerson==false && signCompany==false)
						{
							throw new IllegalArgumentException("һ�ݱ��պ�ͬ����û��ǩ������");
						}
						if(beginDate<=0)
						{
							throw new IllegalArgumentException("��ͬ�����б��տ�ʼ��Ч������");
						}
						if(endDate<=0)
						{
							throw new IllegalArgumentException("��ͬ�����б���ʧЧ������");
						}
						if(endDate<=beginDate)
						{
							throw new IllegalArgumentException("����ʧЧ�����ڱ�����ڱ�����Ч����");
						}



						return new InsuranceContract(this);
					}

					std::string ConcreteBuilder::getContractId()
					{
						return contractId;
					}

					std::string ConcreteBuilder::getPersonName()
					{
						return personName;
					}

					std::string ConcreteBuilder::getCompanyName()
					{
						return companyName;
					}

					long long ConcreteBuilder::getBeginDate()
					{
						return beginDate;
					}

					long long ConcreteBuilder::getEndDate()
					{
						return endDate;
					}

					std::string ConcreteBuilder::getOtherData()
					{
						return otherData;
					}
				}
			}
		}
	}
}