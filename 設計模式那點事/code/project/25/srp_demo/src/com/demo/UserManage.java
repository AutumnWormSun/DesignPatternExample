package com.demo;

import com.state.AdvancedVipUserState;
import com.state.CommonUserState;
import com.state.IUserState;
import com.state.OrdinaryVipUserState;

/**
 * �û�����ʵ����
 * 
 * @author
 */
public class UserManage implements IUserManage {
	private final int auth;

	private IUserState userState;

	public UserManage(int auth) {
		this.auth = auth;
	}

	/**
	 * �ı�״̬����
	 * 
	 * @param userState
	 */
	public void changeUserState(IUserState userState) {
		this.userState = userState;
	}

	/**
	 * �����߼�
	 */
	public void process() {
		if (auth == 1) {
			// ��ͨ�û������߼�
			changeUserState(new CommonUserState());
		} else if (auth == 2) {
			// һ���Ա�����߼�
			changeUserState(new OrdinaryVipUserState());
		} else if (auth == 3) {
			// �߼���Ա�����߼�
			changeUserState(new AdvancedVipUserState());
		} else {
			changeUserState(null);
			// Ȩ�޴���
			System.out.println("Ȩ�޴���");
		}

		if (this.userState != null) {
			this.userState.exec();
		}
	}
}
