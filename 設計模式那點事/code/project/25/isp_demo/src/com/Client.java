package com;

import com.demo.IUserManager;
import com.demo.User;
import com.demo.UserManager;

/**
 * �ͻ���Ӧ�ó���
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {

		// �����û������߶���
		IUserManager userManager = new UserManager();

		// �����û���Ϣ
		User user1 = new User("����", "һ���û�");
		User user2 = new User("����", "��ͨ����Ա");
		User user3 = new User("����", "��������Ա");

		// ��ʾ�������
		userManager.showUserBaseInfo(user1);
		userManager.showUserRoleInfo(user1);

		// ��ʾ�������
		userManager.showUserBaseInfo(user2);
		userManager.showUserRoleInfo(user2);

		// ��ʾ�������
		userManager.showUserBaseInfo(user3);
		userManager.showUserRoleInfo(user3);
	}
}
