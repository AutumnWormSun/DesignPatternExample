package com.demo;

/**
 * �û�����ӿ�
 * 
 * @author
 * 
 */
public interface IUserManager {
	/**
	 * չʾ�û�������Ϣ
	 * 
	 * @param userBaseInfo
	 */
	public void showUserBaseInfo(IUserBaseInfo userBaseInfo);

	/**
	 * չʾ�û���ɫ��Ϣ
	 * 
	 * @param userRoleInfo
	 */
	public void showUserRoleInfo(IUserRoleInfo userRoleInfo);
}
