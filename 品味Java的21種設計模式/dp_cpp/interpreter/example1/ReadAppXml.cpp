#include "ReadAppXml.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example1
				{
					using javax::xml::parsers::DocumentBuilder;
					using javax::xml::parsers::DocumentBuilderFactory;
					using namespace org::w3c::dom;

					void ReadAppXml::read(std::string filePathName) throw(Exception)
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

										//		//��ȡjdbc
										//		NodeList jdbc = doc.getElementsByTagName("jdbc");
										//		//ֻ��һ��jdbc,��ȡjdbc�е������������
										//		NodeList driverClassNode = ((Element)jdbc.item(0)).getElementsByTagName("driver-class");
										//		String driverClass = driverClassNode.item(0).getFirstChild().getNodeValue();
										//		System.out.println("driverClass=="+driverClass);
										//		//ͬ���ȡurl��user��password��ֵ
										//		NodeList urlNode = ((Element)jdbc.item(0)).getElementsByTagName("url");
										//		String url = urlNode.item(0).getFirstChild().getNodeValue();
										//		System.out.println("url=="+url);
										//		
										//		NodeList userNode = ((Element)jdbc.item(0)).getElementsByTagName("user");
										//		String user = userNode.item(0).getFirstChild().getNodeValue();
										//		System.out.println("user=="+user);
										//		
										//		NodeList passwordNode = ((Element)jdbc.item(0)).getElementsByTagName("password");
										//		String password = passwordNode.item(0).getFirstChild().getNodeValue();
										//		System.out.println("password=="+password);
										//		//��ȡapplication-xml
										//		NodeList applicationXmlNode = doc.getElementsByTagName("application-xml");
										//		String applicationXml = applicationXmlNode.item(0).getFirstChild().getNodeValue();
										//		System.out.println("applicationXml=="+applicationXml);

						//��Ҫ��ȡspring-default��Ȼ���ȡapplication-xmls
						//Ȼ����ܻ�ȡapplication-xml		
						NodeList *springDefaultNode = doc->getElementsByTagName("spring-default");
						NodeList *appXmlsNode = (static_cast<Element*>(springDefaultNode->item(0)))->getElementsByTagName("application-xmls");
						NodeList *appXmlNode = (static_cast<Element*>(appXmlsNode->item(0)))->getElementsByTagName("application-xml");
						//ѭ����ȡÿ��application-xmlԪ�ص�ֵ
						for(int i=0;i<appXmlNode->getLength();i++)
						{
							std::string applicationXml = appXmlNode->item(i)->getFirstChild()->getNodeValue();
							puts("applicationXml=="+applicationXml);
						}
					}

					void ReadAppXml::main(std::string args[]) throw(Exception)
					{
						ReadAppXml *t = new ReadAppXml();
						t->read("App2.xml");
					}
				}
			}
		}
	}
}