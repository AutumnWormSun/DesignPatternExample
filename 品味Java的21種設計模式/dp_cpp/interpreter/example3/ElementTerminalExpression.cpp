#include "ElementTerminalExpression.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example3
				{
					using org::w3c::dom::Element;
					using org::w3c::dom::NodeList;

					ElementTerminalExpression::ElementTerminalExpression(std::string name)
					{
						InitializeInstanceFields();
						this->eleName = name;
					}

					std::string *ElementTerminalExpression::interpret(Context *c)
					{
						//��ȡ����������ĵ�ǰԪ����Ϊ����Ԫ��
						Element *pEle = c->getPreEle();
						//���ҵ���ǰԪ����������Ӧ��xmlԪ��
						Element *ele = 0;
						if(pEle==0)
						{
							//˵�����ڻ�ȡ���Ǹ�Ԫ��
							ele = c->getDocument()->getDocumentElement();
							c->setPreEle(ele);
						}
						else
						{
							//���ݸ���Ԫ�غ�Ҫ���ҵ�Ԫ�ص���������ȡ��ǰ��Ԫ��
							ele = c->getNowEle(pEle, eleName);
							//�ѵ�ǰ��ȡ��Ԫ�طŵ�����������
							c->setPreEle(ele);
						}

						//Ȼ����Ҫȥ��ȡ���Ԫ�ص�ֵ
						std::string ss[1];
						ss[0] = ele->getFirstChild()->getNodeValue();
						return ss;
					}
				}
			}
		}
	}
}