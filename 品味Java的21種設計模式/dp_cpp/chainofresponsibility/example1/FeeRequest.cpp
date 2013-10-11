#include "FeeRequest.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example1
				{

					std::string FeeRequest::requestToProjectManager(std::string user, double fee)
					{
						std::string str = "";
						if(fee < 500)
						{
							//��Ŀ�����Ȩ�ޱȽ�С��ֻ����500����
							str = this->projectHandle(user, fee);
						}
						else if(fee < 1000)
						{
							//���ž����Ȩ��ֻ����1000����
							str = this->depManagerHandle(user, fee);
						}
						else if(fee >= 1000)
						{
							//�ܾ����Ȩ�޺ܴ�ֻҪ����������������Դ���
							str = this->generalManagerHandle(user, fee);
						}
						return str;
					}

					std::string FeeRequest::projectHandle(std::string user, double fee)
					{
						std::string str = "";
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

					std::string FeeRequest::depManagerHandle(std::string user, double fee)
					{
						std::string str = "";
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

					std::string FeeRequest::generalManagerHandle(std::string user, double fee)
					{
						std::string str = "";

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
				}
			}
		}
	}
}