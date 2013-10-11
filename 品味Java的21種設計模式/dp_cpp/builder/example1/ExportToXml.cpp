#include "ExportToXml.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace builder
			{
				namespace example1
				{

					void ExportToXml::export(ExportHeaderModel *ehm, Map<std::string, Collection<ExportDataModel*>*> *mapData, ExportFooterModel *efm)
					{
						//������¼����������ļ�����
						StringBuffer *buffer = new StringBuffer();
						//1������ƴ���ļ�ͷ������
						buffer->append("<?xml version='1.0' encoding='gb2312'?>\n");
						buffer->append("<Report>\n");
						buffer->append("  <Header>\n");
						buffer->append("    <DepId>"+ehm->getDepId()+"</DepId>\n");
						buffer->append("    <ExportDate>"+ehm->getExportDate()+"</ExportDate>\n");
						buffer->append("  </Header>\n");
						//2��������ƴ���ļ��������
						buffer->append("  <Body>\n");
						for (Map<std::string, Collection<ExportDataModel*>*>::const_iterator tblName = mapData->begin(); tblName != mapData->end(); ++tblName)
						{
							//��ƴ�ӱ�����
							buffer->append("    <Datas TableName=\""+tblName->first+"\">\n");
							//Ȼ��ѭ��ƴ�Ӿ�������
							for (unknown::const_iterator edm = mapData->get(tblName).begin(); edm != mapData->get(tblName).end(); ++edm)
							{
								buffer->append("      <Data>\n");
								buffer->append("        <ProductId>"+(*edm)->getProductId()+"</ProductId>\n");
								buffer->append("        <Price>"+(*edm)->getPrice()+"</Price>\n");
								buffer->append("        <Amount>"+(*edm)->getAmount()+"</Amount>\n");
								buffer->append("      </Data>\n");
							}
							buffer->append("    </Datas>\n");
						}
						buffer->append("  </Body>\n");
						//3��������ƴ���ļ�β������
						buffer->append("  <Footer>\n");
						buffer->append("    <ExportUser>"+efm->getExportUser()+"</ExportUser>\n");
						buffer->append("  </Footer>\n");
						buffer->append("</Report>\n");

						//Ϊ����ʾ����ԣ�����Ͳ�ȥд����ļ��Ĵ�����
						//��Ҫ������������������̨����
						puts("�����XML�ļ������ݣ�\n"+buffer);
					}
				}
			}
		}
	}
}