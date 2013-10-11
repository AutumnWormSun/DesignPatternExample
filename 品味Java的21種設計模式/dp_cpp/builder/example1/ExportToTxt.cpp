#include "ExportToTxt.h"

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

					void ExportToTxt::export(ExportHeaderModel *ehm, Map<std::string, Collection<ExportDataModel*>*> *mapData, ExportFooterModel *efm)
					{
						//������¼����������ļ�����
						StringBuffer *buffer = new StringBuffer();
						//1������ƴ���ļ�ͷ������
						buffer->append(ehm->getDepId()+","+ehm->getExportDate()+"\n");
						//2��������ƴ���ļ��������
						for (Map<std::string, Collection<ExportDataModel*>*>::const_iterator tblName = mapData->begin(); tblName != mapData->end(); ++tblName)
						{
							//��ƴ�ӱ�����
							buffer->append(tblName->first+"\n");
							//Ȼ��ѭ��ƴ�Ӿ�������
							for (unknown::const_iterator edm = mapData->get(tblName).begin(); edm != mapData->get(tblName).end(); ++edm)
							{
								buffer->append((*edm)->getProductId()+","+(*edm)->getPrice()+","+(*edm)->getAmount()+"\n");
							}
						}
						//3��������ƴ���ļ�β������
						buffer->append(efm->getExportUser());

						//Ϊ����ʾ����ԣ�����Ͳ�ȥд����ļ��Ĵ�����
						//��Ҫ������������������̨����
						puts("������ı��ļ������ݣ�\n"+buffer);
					}
				}
			}
		}
	}
}