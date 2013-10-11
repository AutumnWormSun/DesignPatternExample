#include "Factory.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace simplefactory
			{
				namespace example4
				{

					Api *Factory::createApi(int type)
					{
						//�����typeҲ���Բ����ⲿ���룬����ֱ�Ӷ�ȡ�����ļ�����ȡ
						//Ϊ�˰�ע��������ģʽ�����ϣ�����Ͳ�ȥд��ȡ�����ļ��Ĵ�����

						//����type������ѡ�񣬵�Ȼ�����1��2Ӧ�����ɳ���
						Api *api = 0;
						if(type==1)
						{
							api = new Impl();
						}
						else if(type==2)
						{
							api = new Impl2();
						}
						return api;
					}
				}
			}
		}
	}
}