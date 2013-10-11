#include "FlowAMementoFileCareTaker.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace memento
			{
				namespace example3
				{

					void FlowAMementoFileCareTaker::saveMemento(FlowAMockMemento *memento)
					{
						//д���ļ���
						ObjectOutputStream *out = 0;
						try
						{
							out = new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream("FlowAMemento")));
							out->writeObject(memento);
						}
						catch(Exception *err)
						{
							err->printStackTrace();
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							try
							{
								out->close();
							}
							catch (IOException *e)
							{
								e->printStackTrace();
							}
						}
					}

					FlowAMockMemento *FlowAMementoFileCareTaker::retriveMemento()
					{
						FlowAMockMemento *memento = 0;
						//���ļ��л�ȡ����¼����
//JAVA TO C++ CONVERTER NOTE: The local variable in was renamed since it is a keyword in C++:
						ObjectInputStream *in_Renamed = 0;
						try
						{
							in_Renamed = new ObjectInputStream(new BufferedInputStream(new FileInputStream("FlowAMemento")));
							memento = static_cast<FlowAMockMemento*>(in_Renamed::readObject());
						}
						catch(Exception *err)
						{
							err->printStackTrace();
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							try
							{
								in_Renamed->close();
							}
							catch (IOException *e)
							{
								e->printStackTrace();
							}
						}
						return memento;
					}
				}
			}
		}
	}
}