#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace command
			{
				namespace example9
				{

					void Client::main(std::string args[])
					{
						//׼��Ҫ���������û�о���ʵ������
//JAVA TO C++ CONVERTER TODO TASK: Anonymous inner classes are not converted to C++:
//						Command cmd = new Command()
										//		{
										//			private String str = "";
										//			public void setStr(String s)
										//			{
										//				str = s;
										//			}
										//
										//			public void execute()
										//			{
										//				System.out.println("��ӡ������Ϊ="+str);
										//			}
										//		};
						cmd::setStr("�˻�������ģʽ������Java�ص���ʾ��");

						//���ʱ���Invoker����ó�Ϊ������
						Invoker *invoker = new Invoker();
						//���°�ť����������ִ������
						invoker->startPrint(cmd);
					}
				}
			}
		}
	}
}