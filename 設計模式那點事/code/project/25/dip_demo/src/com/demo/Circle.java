package com.demo;

/**
 * Բ����
 * 
 * @author
 * 
 */
public class Circle implements IShape {

	private int r;

	/**
	 * ���췽������뾶F
	 * 
	 * @param r
	 */
	public Circle(int r) {
		this.r = r;
	}

	/**
	 * ����Բ�����
	 */
	@Override
	public double area() {
		return 3.14 * r * r;
	}

	public int getR() {
		return r;
	}

	public void setR(int r) {
		this.r = r;
	}

}
