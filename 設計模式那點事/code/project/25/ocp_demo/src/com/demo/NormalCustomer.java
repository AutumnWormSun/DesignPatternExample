package com.demo;

/**
 * ������ס�˿�
 * 
 * @author
 * 
 */
public class NormalCustomer extends AbstractCustomer {

	/**
	 * ���췽�������������Ա�����
	 * 
	 * @param name
	 * @param sex
	 * @param age
	 */
	public NormalCustomer(String name, String sex, int age) {
		super(name, sex, age);
	}

	/**
	 * ���������ܼ�
	 */
	@Override
	public double totalPrice(int price, int days) {
		return price * days;
	}

}
