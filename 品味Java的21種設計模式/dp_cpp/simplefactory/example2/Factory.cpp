#include "Factory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example2
				{

					Api *Factory::createApi(int condition)
					{
						//Ӧ�ø���ĳЩ����ȥѡ�񾿾�������һ�������ʵ�ֶ���
						//��Щ�������Դ��ⲿ���룬Ҳ���Դ�����;����ȡ
						//���ֻ��һ��ʵ�֣�����ʡ����������Ϊû��ѡ��ı�Ҫ

						//ʾ��ʹ������
						Api *api = 0;
						if(condition == 1)
						{
							api = new ImplA();
						}
						else if(condition == 2)
						{
							api = new ImplB();
						}
						return api;
					}
				}
			}
		}
	}
}