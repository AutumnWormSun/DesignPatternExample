#include "ProjectManager.h"

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

					std::string ProjectManager::handleFeeRequest(std::string user, double fee)
					{
						std::string str = "";
						//��Ŀ�����Ȩ�ޱȽ�С��ֻ����500����
						if(fee < 500)
						{
							//Ϊ�˲��ԣ��򵥵㣬ֻͬ��С���
							if((new std::string("С��"))->equals(user))
							{
								str = "��Ŀ����ͬ��"+user+"�۲ͷ���"+fee+"Ԫ������";
							}
							else
							{
								//������һ�ɲ�ͬ��
								str = "��Ŀ����ͬ��"+user+"�۲ͷ���"+fee+"Ԫ������";
							}
							return str;
						}
						else
						{
							//����500���������ݸ�������ߵ��˴���
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