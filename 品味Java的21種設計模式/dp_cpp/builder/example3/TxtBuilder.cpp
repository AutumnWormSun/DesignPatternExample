#include "TxtBuilder.h"

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

					void TxtBuilder::buildBody(Map<std::string, Collection<ExportDataModel*>*> *mapData)
					{
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
					}

					void TxtBuilder::buildFooter(ExportFooterModel *efm)
					{
						buffer->append(efm->getExportUser());
					}

					void TxtBuilder::buildHeader(ExportHeaderModel *ehm)
					{
						buffer->append(ehm->getDepId()+","+ehm->getExportDate()+"\n");
					}

					StringBuffer *TxtBuilder::getResult()
					{
						return buffer;
					}
				}
			}
		}
	}
}