package com;

import com.demo.IUserManage;
import com.demo.UserManage;

/**
 * �ͻ���Ӧ��
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// �����û��������
		IUserManage userManage = new UserManage(2);
		// ����Ȩ��
		userManage.process();
	}

}
