#include "PropertysTerminalExpression.h"

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

					PropertysTerminalExpression::PropertysTerminalExpression(std::string propName)
					{
						this->propName = propName;
					}

					std::string *PropertysTerminalExpression::interpret(Context *c)
					{
						//��ȡ���Ķ��Ԫ��
						std::vector<Element*> eles = c->getPreEles();

						std::string ss[eles.size()];
						//ѭ�����Ԫ�أ���ȡÿ�������Ե�ֵ
						for(int i=0;i<sizeof(ss) / sizeof(ss[0]);i++)
						{
							ss[i] = eles.at(i)->getAttribute(this->propName);
						}
						return ss;
					}
				}
			}
		}
	}
}