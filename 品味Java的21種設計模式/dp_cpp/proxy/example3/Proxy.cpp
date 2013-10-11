#include "Proxy.h"

namespace cn
{
	namespace javass
	{
		namespace dp
		{
			namespace proxy
			{
				namespace example3
				{

					Proxy::Proxy(UserModel *realSubject)
					{
						this->realSubject = realSubject;
					}

					std::string Proxy::getUserId()
					{
						return realSubject->getUserId();
					}

					void Proxy::setUserId(std::string userId)
					{
						realSubject->setUserId(userId);
					}

					std::string Proxy::getName()
					{
						return realSubject->getName();
					}

					void Proxy::setName(std::string name)
					{
						realSubject->setName(name);
					}

					void Proxy::setDepId(std::string depId)
					{
						realSubject->setDepId(depId);
					}

					void Proxy::setSex(std::string sex)
					{
						realSubject->setSex(sex);
					}

					std::string Proxy::getDepId()
					{
						//��Ҫ�ж��Ƿ��Ѿ�װ�ع���
						if(!this->loaded)
						{
							//�����ݿ�������װ��
							reload();
							//��������װ�صı�־Ϊtrue
							this->loaded = true;
						}
						return realSubject->getDepId();
					}

					std::string Proxy::getSex()
					{
						if(!this->loaded)
						{
							reload();
							this->loaded = true;
						}
						return realSubject->getSex();
					}

					void Proxy::reload()
					{
						puts("���²�ѯ���ݿ��ȡ�������û����ݣ�userId=="+realSubject->getUserId());
						Connection *conn = 0;
						try
						{
							conn = this->getConnection();
							std::string sql = "select * from tbl_user where userId=? ";

							PreparedStatement *pstmt = conn->prepareStatement(sql);
							pstmt->setString(1, realSubject->getUserId());

							ResultSet *rs = pstmt->executeQuery();
							if(rs->next())
							{
								//ֻ��Ҫ���»�ȡ����userId��name�������
								realSubject->setDepId(rs->getString("depId"));
								realSubject->setSex(rs->getString("sex"));
							}

							rs->close();
							pstmt->close();
						}
						catch(Exception *err)
						{
							err->printStackTrace();
						}
//JAVA TO C++ CONVERTER TODO TASK: There is no native C++ equivalent to the exception 'finally' clause:
						finally
						{
							try
							{
								conn->close();
							}
							catch (SQLException *e)
							{
								e->printStackTrace();
							}
						}
					}

					std::string Proxy::ToString()
					{
						return "userId="+getUserId()+",name="+getName() +",depId="+getDepId()+",sex="+getSex()+"\n";
					}

					Connection *Proxy::getConnection() throw(Exception)
					{
						Class::forName("oracle.jdbc.driver.OracleDriver");
						return DriverManager::getConnection("jdbc:oracle:thin:@localhost:1521:orcl", "test", "test");
					}
				}
			}
		}
	}
}