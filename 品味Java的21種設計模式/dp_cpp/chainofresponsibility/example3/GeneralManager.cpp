#include "GeneralManager.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example3
				{

					std::string GeneralManager::handleFeeRequest(std::string user, double fee)
					{
						std::string str = "";
						//�ܾ����Ȩ�޺ܴ�ֻҪ����������������Դ���
						if(fee >= 1000)
						{
							//Ϊ�˲��ԣ��򵥵㣬ֻͬ��С���
							if((new std::string("С��"))->equals(user))
							{
								str = "�ܾ���ͬ��"+user+"�۲ͷ���"+fee+"Ԫ������";
							}
							else
							{
								//������һ�ɲ�ͬ��
								str = "�ܾ���ͬ��"+user+"�۲ͷ���"+fee+"Ԫ������";
							}
							return str;
						}
						else
						{
							//������к�̵Ĵ�����󣬼�������
							if(this->successor!=0)
							{
								return successor->handleFeeRequest(user, fee);
							}
						}
						return str;
					}
				}
			}
		}
	}
}