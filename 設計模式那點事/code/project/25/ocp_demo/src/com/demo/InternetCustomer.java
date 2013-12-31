package com.demo;

/**
 * ����˿�ʵ����
 * 
 * @author
 * 
 */
public class InternetCustomer extends AbstractCustomer {

	// ����Ԥ��
	private final String internet;

	/**
	 * ���췽�������������Ա����䡢����
	 * 
	 * @param name
	 * @param sex
	 * @param age
	 * @param internet
	 */

	public InternetCustomer(String name, String sex, int age, String internet) {
		super(name, sex, age);
		this.internet = internet;
	}

	/**
	 * ���������ܼ�(�����)
	 */
	@Override
	public double totalPrice(int price, int days) {
		return (price * days) * 0.8;
	}

	/**
	 * 
	 */
	@Override
	public String toString() {
		return super.toString() + " ����Ԥ��(�����):" + this.internet;
	}
}
