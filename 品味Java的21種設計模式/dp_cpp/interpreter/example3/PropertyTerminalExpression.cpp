#include "PropertyTerminalExpression.h"

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

					PropertyTerminalExpression::PropertyTerminalExpression(std::string propName)
					{
						this->propName = propName;
					}

					std::string *PropertyTerminalExpression::interpret(Context *c)
					{
						//ֱ�ӻ�ȡ����Ԫ�ص����Ե�ֵ
						std::string ss[1];
						ss[0] = c->getPreEle()->getAttribute(this->propName);
						return ss;
					}
				}
			}
		}
	}
}