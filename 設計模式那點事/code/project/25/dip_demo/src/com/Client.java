package com;

import com.demo.Circle;
import com.demo.Graphic;
import com.demo.Rectangle;

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
		// ����ͼ�δ������
		Graphic graphic = new Graphic();
		// ���������ζ���
		Rectangle rectangle = new Rectangle(3, 4);
		// ����
		graphic.calculateAarea(rectangle);

		// ����Բ�ζ���
		Circle circle = new Circle(10);
		// ����Բ��
		graphic.calculateAarea(circle);
	}

}
