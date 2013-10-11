#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace chainofresponsibility
			{
				namespace example5
				{

					void Client::main(std::string args[])
					{
						//��Ҫ��װְ����		
						Handler *h1 = new GeneralManager2();
						Handler *h2 = new DepManager2();
						Handler *h3 = new ProjectManager2();
						h3->setSuccessor(h2);
						h2->setSuccessor(h1);

						//��ʼ��������۲ͷ���
						FeeRequestModel *frm = new FeeRequestModel();
						frm->setFee(300);
						frm->setUser("С��");
						//���ô���
						std::string ret1 = static_cast<std::string>(h3->handleRequest(frm));
						puts("ret1="+ret1);

						//��������������ٵ��ô���
						frm->setFee(800);
						h3->handleRequest(frm);
						std::string ret2 = static_cast<std::string>(h3->handleRequest(frm));
						puts("ret2="+ret2);

						//��������������ٵ��ô���
						frm->setFee(1600);
						h3->handleRequest(frm);
						std::string ret3 = static_cast<std::string>(h3->handleRequest(frm));
						puts("ret3="+ret3);

						//��ʼ��������Ԥ֧���÷���
						PreFeeRequestModel *pfrm = new PreFeeRequestModel();
						pfrm->setFee(3000);
						pfrm->setUser("С��");
						//���ô���
						h3->handleRequest(pfrm);
						//��������������ٵ��ô���
						pfrm->setFee(6000);
						h3->handleRequest(pfrm);
						//��������������ٵ��ô���
						pfrm->setFee(36000);
						h3->handleRequest(pfrm);
					}
				}
			}
		}
	}
}