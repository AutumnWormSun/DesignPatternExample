#include "Client.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example3
				{

					void Client::main(std::string args[])
					{
						//׼����������
						ExportHeaderModel *ehm = new ExportHeaderModel();
						ehm->setDepId("һ�ֹ�˾");
						ehm->setExportDate("2010-05-18");

						Map<std::string, Collection<ExportDataModel*>*> *mapData = std::map<std::string, Collection<ExportDataModel*>*>();
						Collection<ExportDataModel*> *col = std::vector<ExportDataModel*>();

						ExportDataModel *edm1 = new ExportDataModel();
						edm1->setProductId("��Ʒ001��");
						edm1->setPrice(100);
						edm1->setAmount(80);

						ExportDataModel *edm2 = new ExportDataModel();
						edm2->setProductId("��Ʒ002��");
						edm2->setPrice(99);
						edm2->setAmount(55);
						//��������װ����
						col->add(edm1);
						col->add(edm2);
						mapData->put("���ۼ�¼��", col);

						ExportFooterModel *efm = new ExportFooterModel();
						efm->setExportUser("����");

						//����������ı��ļ�
						TxtBuilder *txtBuilder = new TxtBuilder();
						//����ָ���߶���
						Director *director = new Director(txtBuilder);
						director->construct(ehm, mapData, efm);
						//��Ҫ������������������̨����
						puts("������ı��ļ������ݣ�\n"+txtBuilder->getResult());
						//���������xml�ļ�
						XmlBuilder *xmlBuilder = new XmlBuilder();
						Director *director2 = new Director(xmlBuilder);
						director2->construct(ehm, mapData, efm);
						//��Ҫ������������������̨����
						puts("�����XML�ļ������ݣ�\n"+xmlBuilder->getResult());

					}
				}
			}
		}
	}
}