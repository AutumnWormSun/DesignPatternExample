package com.demo;

/**
 * ����˿���
 * 
 * @author
 * 
 */
public abstract class AbstractCustomer implements ICustomer {
	// ����
	private final String name;
	// �Ա�
	private final String sex;
	// ����
	private final int age;

	/**
	 * ���췽�� �����������Ա�������Ϣ
	 * 
	 * @param name
	 * @param sex
	 * @param age
	 */
	public AbstractCustomer(String name, String sex, int age) {
		this.name = name;
		this.sex = sex;
		this.age = age;
	}

	/**
	 * ���������ܼ� ������ʵ��
	 * 
	 * @param price
	 * @param days
	 */
	protected abstract double totalPrice(int price, int days);

	/**
	 * ��ӡ�˿��������
	 */
	public void consume(int price, int days) {
		// �������
		String message = "�ͷ�����:" + price + " ��ס����:" + days + " �ܼ�:"
				+ totalPrice(price, days);
		// ����˿�������Ϣ
		System.out.println(toString() + " - " + message);
	}

	/**
	 * �˿���Ϣ
	 */
	@Override
	public String toString() {
		return "����:" + this.name + " �Ա�:" + this.sex + " ����:" + this.age;
	}
}
