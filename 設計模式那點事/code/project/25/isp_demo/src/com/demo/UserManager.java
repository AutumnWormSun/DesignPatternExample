package com.demo;

/**
 * �û�������
 * 
 * @author
 * 
 */
public class UserManager implements IUserManager {

	/**
	 * չʾ�û�������Ϣ
	 * 
	 * @param userBaseInfo
	 */
	public void showUserBaseInfo(IUserBaseInfo userBaseInfo) {
		System.out.print(userBaseInfo.getUserBaseInfo());
	}

	/**
	 * չʾ�û���ɫ��Ϣ
	 * 
	 * @param userRoleInfo
	 */
	public void showUserRoleInfo(IUserRoleInfo userRoleInfo) {
		System.out.println(userRoleInfo.getUserRoleInfo());
	}
}
