#include "ElementTerminalExpression.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace interpreter
			{
				namespace example5
				{
					using org::w3c::dom::Element;

					ElementTerminalExpression::ElementTerminalExpression(std::string name)
					{
						InitializeInstanceFields();
						this->eleName = name;
					}

					std::string *ElementTerminalExpression::interpret(Context *c)
					{
						//��ȡ����������ĵ�ǰԪ����Ϊ����Ԫ��
						std::vector<Element*> pEles = c->getPreEles();
						//���ҵ���ǰԪ����������Ӧ��xmlԪ��
						Element *ele = 0;
						if(pEles.empty())
						{
							//˵�����ڻ�ȡ���Ǹ�Ԫ��
							ele = c->getDocument()->getDocumentElement();
						}
						else
						{
							//��ȡ��ǰ��Ԫ��
							ele = c->getNowEles(pEles.front(), eleName).front();
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