package com;

import com.demo.ICustomer;
import com.demo.InternetCustomer;
import com.demo.NormalCustomer;

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
		// ������ͨ�˿���Ϣ
		ICustomer customer1 = new NormalCustomer("����", "��", 24);
		ICustomer customer2 = new NormalCustomer("����", "��", 22);
		ICustomer customer3 = new NormalCustomer("����", "Ů", 23);
		ICustomer customer4 = new NormalCustomer("����", "��", 25);

		// ������ͨ�˿��������
		customer1.consume(240, 2);
		customer2.consume(200, 3);
		customer3.consume(100, 1);
		customer4.consume(150, 4);

		// ����Ԥ���˿�
		ICustomer customer5 = new InternetCustomer("·�˼�", "��", 26, "A����");
		ICustomer customer6 = new InternetCustomer("·����", "Ů", 27, "B����");

		// ��������Ԥ���˿��������
		customer5.consume(200, 1);
		customer6.consume(300, 2);
	}
}
