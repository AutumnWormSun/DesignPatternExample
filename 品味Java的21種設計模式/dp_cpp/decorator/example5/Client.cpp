#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace decorator
			{
				namespace example5
				{

					void Client::main(std::string args[]) throw(Exception)
					{
						//��ʽ����ļ�
						DataOutputStream *dout = new DataOutputStream(new EncryptOutputStream(new BufferedOutputStream(new FileOutputStream("MyEncrypt.txt"))));
						//Ȼ��Ϳ������������
						dout->write((new std::string("abcdxyz"))->getBytes());
						dout->close();
					}
				}
			}
		}
	}
}