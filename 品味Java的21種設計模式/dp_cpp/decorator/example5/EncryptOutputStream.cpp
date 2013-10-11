#include "EncryptOutputStream.h"

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

					EncryptOutputStream::EncryptOutputStream(OutputStream *os)
					{
						this->os = os;
					}

					void EncryptOutputStream::write(int a) throw(IOException)
					{
						//��ͳһ����ƶ���λ
						a = a+2;
						//97��Сд��a����ֵ
						if(a >= (97+26))
						{
							//������ڣ���ʾ�Ѿ���y����z�ˣ���ȥ26�ͻص�a����b��
							a = a-26;
						}
						this->os->write(a);
					}
				}
			}
		}
	}
}