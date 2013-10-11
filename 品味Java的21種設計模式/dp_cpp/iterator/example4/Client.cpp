#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace iterator
			{
				namespace example4
				{

					void Client::main(std::string args[])
					{
						//���ʼ��ŵĹ����б�
						PayManager *payManager= new PayManager();
						//�ȼ����ٻ�ȡ
						payManager->calcPay();
						Collection<PayModel*> *payList = payManager->getPayList();
						puts("���Ź����б�");
										//		Iterator it = payList.iterator();
										//		while(it.hasNext()){
										//			PayModel pm = (PayModel)it.next();
										//			System.out.println(pm);
										//		}
						for (Collection<PayModel*>::const_iterator pm = payList->begin(); pm != payList->end(); ++pm)
						{
							puts(*pm);
						}
						//�������չ���˾�Ĺ����б�
						SalaryManager *salaryManager = new SalaryManager();
						//�ȼ����ٻ�ȡ
						salaryManager->calcSalary();
//ORIGINAL LINE: PayModel[] pms = salaryManager.getPays();
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						PayModel *pms = salaryManager->getPays();
						puts("���չ��Ĺ�˾�����б�");
										//		for(int i=0;i<pms.length;i++){
										//			System.out.println(pms[i]);
										//		}
						for (PayModel::const_iterator pm = pms->begin(); pm != pms->end(); ++pm)
						{
							puts(*pm);
						}
					}
				}
			}
		}
	}
}