#include "ElementExpression.h"

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

					ElementExpression::ElementExpression(std::string eleName)
					{
						InitializeInstanceFields();
						this->eleName = eleName;
					}

					bool ElementExpression::addEle(ReadXmlExpression *ele)
					{
						this->eles->add(ele);
						return true;
					}

					bool ElementExpression::removeEle(ReadXmlExpression *ele)
					{
						this->eles->remove(ele);
						return true;
					}

					std::string *ElementExpression::interpret(Context *c)
					{
						//��ȡ����������ĵ�ǰԪ����Ϊ����Ԫ��
						//���ҵ���ǰԪ����������Ӧ��xmlԪ�أ������ûص���������
						Element *pEle = c->getPreEle();
						if(pEle==0)
						{
							//˵�����ڻ�ȡ���Ǹ�Ԫ��
							c->setPreEle(c->getDocument()->getDocumentElement());
						}
						else
						{
							//���ݸ���Ԫ�غ�Ҫ���ҵ�Ԫ�ص���������ȡ��ǰ��Ԫ��
							Element *nowEle = c->getNowEle(pEle, eleName);
							//�ѵ�ǰ��ȡ��Ԫ�طŵ�����������
							c->setPreEle(nowEle);
						}

						//ѭ��������Ԫ�ص�interpret����
//ORIGINAL LINE: String [] ss = nullptr;
//JAVA TO C++ CONVERTER WARNING: Since the array size is not known in this declaration, Java to C++ Converter has converted this array to a pointer.  You will need to call 'delete[]' where appropriate:
						std::string *ss = 0;
						for (Collection<ReadXmlExpression*>::const_iterator ele = eles->begin(); ele != eles->end(); ++ele)
						{
							ss = (*ele)->interpret(c);
						}
						return ss;
					}
				}
			}
		}
	}
}