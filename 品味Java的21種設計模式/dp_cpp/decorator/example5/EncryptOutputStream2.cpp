#include "EncryptOutputStream2.h"

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

					EncryptOutputStream2::EncryptOutputStream2(OutputStream *os) : java.io.FilterOutputStream(os)
					{
						//���ø���Ĺ��췽��
					}

					void EncryptOutputStream2::write(int a) throw(IOException)
					{
						//��ͳһ����ƶ���λ
						a = a+2;
						//97��Сд��a����ֵ
						if(a >= (97+26))
						{
							//������ڣ���ʾ�Ѿ���y����z�ˣ���ȥ26�ͻص�a����b��
							a = a-26;
						}
						//���ø���ķ���
						java::io::FilterOutputStream::write(a);
					}
				}
			}
		}
	}
}