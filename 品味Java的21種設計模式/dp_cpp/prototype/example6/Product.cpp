#include "Product.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace prototype
			{
				namespace example6
				{

					std::string Product::getName()
					{
						return name;
					}

					void Product::setName(std::string name)
					{
						this->name = name;
					}

					std::string Product::getProductId()
					{
						return productId;
					}

					void Product::setProductId(std::string productId)
					{
						this->productId = productId;
					}

					std::string Product::ToString()
					{
						return "��Ʒ���="+this->productId+"����Ʒ����="+this->name;
					}

					ProductPrototype *Product::cloneProduct()
					{
						//����һ���µĶ�����Ȼ��ѱ�ʵ�������ݸ��ƹ�ȥ
						Product *product = new Product();
						product->setProductId(this->productId);
						product->setName(this->name);
						return product;
					}
				}
			}
		}
	}
}