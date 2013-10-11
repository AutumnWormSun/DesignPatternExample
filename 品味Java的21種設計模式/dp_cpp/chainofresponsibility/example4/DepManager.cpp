#include "DepManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example4
				{

					std::string DepManager::handleFeeRequest(std::string user, double fee)
					{
						std::string str = "";
						//���ž����Ȩ��ֻ����1000����
						if(fee < 1000)
						{
							//Ϊ�˲��ԣ��򵥵㣬ֻͬ��С�������
							if((new std::string("С��"))->equals(user))
							{
								str = "���ž���ͬ��"+user+"�۲ͷ���"+fee+"Ԫ������";
							}
							else
							{
								//������һ�ɲ�ͬ��
								str = "���ž���ͬ��"+user+"�۲ͷ���"+fee+"Ԫ������";
							}
							return str;
						}
						else
						{
							//����1000���������ݸ�������ߵ��˴���
							if(this->successor!=0)
							{
								return this->successor->handleFeeRequest(user, fee);
							}
						}
						return str;
					}

					bool DepManager::handlePreFeeRequest(std::string user, double requestNum)
					{
						//���ž����Ȩ�ޱȽ�С��ֻ����20000����
						if(requestNum < 20000)
						{
							//������Ҫ�ͳͳͬ��
							puts("���ž���ͬ��"+user+"Ԥ֧���÷���"+requestNum+"Ԫ������");
							return true;
						}
						else
						{
							//����20000���������ݸ�������ߵ��˴���
							if(this->successor!=0)
							{
								return this->successor->handlePreFeeRequest(user, requestNum);
							}
						}
						return false;
					}
				}
			}
		}
	}
}