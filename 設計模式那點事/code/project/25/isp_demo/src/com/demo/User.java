package com.demo;

/**
 * �����û�
 * 
 * @author
 * 
 */
public class User implements IUserBaseInfo, IUserRoleInfo {

	// ����
	private final String name;
	// ��ɫ
	private final String role;

	/**
	 * ���췽�����������ͽ�ɫ����
	 * 
	 * @param name
	 *            ����
	 * @param role
	 *            ��ɫ
	 */
	public User(String name, String role) {
		this.name = name;
		this.role = role;
	}

	/**
	 * ����û�������Ϣ
	 */
	@Override
	public String getUserBaseInfo() {
		return " - ����:" + this.name;

	}

	/**
	 * ����û���ɫ��Ϣ
	 */
	@Override
	public String getUserRoleInfo() {
		return " - ��ɫ:" + this.role;
	}

}
