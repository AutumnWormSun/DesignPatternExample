package com;

import com.prototype.factory.ILifeFactory;
import com.prototype.factory.impl.LifeFactoryImpl;
import com.prototype.pojo.DayLife;

/**
 * ��Ӧ�ó���
 * 
 * @author
 * 
 */
public class Client {

	public static void main(String[] args) {
		// ��������
		ILifeFactory lifeFactory = new LifeFactoryImpl();
		// ��ӡ���DayLifeĬ������
		lifeFactory.getNewInstance().print();

		// �ٴλ��DayLife���޸�getUp���ݺ� �������
		System.out.println("------------------------");
		DayLife dayLife = lifeFactory.getNewInstance();
		dayLife.setGetUp("���������ˣ�7::15���𴲣�");
		dayLife.print();

		// �ٴλ��DayLife���޸�getUp���ݺ� �������
		// System.out.println("------------------------");
		// DayLife dayLife2 = lifeFactory.getNewInstance();
		// dayLife2.setGetUp("���������ˣ�7::30���𴲣�");
		// dayLife2.print();
	}
}
