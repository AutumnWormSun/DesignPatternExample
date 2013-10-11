#include "XmlUtil.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example4
				{
					using javax::xml::parsers::DocumentBuilder;
					using javax::xml::parsers::DocumentBuilderFactory;
					using org::w3c::dom::Document;

					Document *XmlUtil::getRoot(std::string filePathName) throw(Exception)
					{
						Document *doc = 0;
						  //����һ������������
						  DocumentBuilderFactory *factory = DocumentBuilderFactory::newInstance();
						  //���һ��DocumentBuilder���������������˾����DOM������
						  DocumentBuilder *builder=factory->newDocumentBuilder();
						  //�õ�һ����ʾXML�ĵ���Document����
						  doc=builder->parse(filePathName);
						  //ȥ��XML�ĵ�����Ϊ��ʽ�����ݵĿհ׶�ӳ����DOM���еĲ���Ҫ��Text Node����
						  doc->normalize();
						  return doc;
					}
				}
			}
		}
	}
}