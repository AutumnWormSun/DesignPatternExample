#include "Director.h"

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

					Director::Director(Builder *builder)
					{
						this->builder = builder;
					}

					void Director::construct(ExportHeaderModel *ehm, Map<std::string, Collection<ExportDataModel*>*> *mapData, ExportFooterModel *efm)
					{
						//1���ȹ���Header
						builder->buildHeader(ehm);
						//2��Ȼ�󹹽�Body
						builder->buildBody(mapData);
						//3��Ȼ�󹹽�Footer
						builder->buildFooter(efm);
					}
				}
			}
		}
	}
}