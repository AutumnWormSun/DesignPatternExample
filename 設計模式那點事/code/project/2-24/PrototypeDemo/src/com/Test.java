package com;

import java.util.ArrayList;

public class Test implements Cloneable {

	// ˽������
	private ArrayList<String> nameList = new ArrayList<String>();

	// �������
	public void add(String s) {
		this.nameList.add(s);
	}

	// ���ArrayList����
	public ArrayList<String> get() {
		return this.nameList;
	}

	// clone����
	@Override
	public Test clone() {
		try {
			Test test = (Test) super.clone();
			test.nameList = (ArrayList<String>) this.nameList.clone();
			return test;
		} catch (CloneNotSupportedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return null;
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// ����test����
		Test test = new Test();
		// ����test��������
		test.add("aa");
		test.add("bb");

		// ��ӡ��ʾtest�е�nameList����
		System.out.println("test:" + test.get());

		// ��¡test��������test2����
		Test test2 = test.clone();
		// ���"cc"���ݵ�test2������
		test2.add("cc");
		// ��ӡ��ʾtest2�е�nameList����
		System.out.println("test2:" + test2.get());

		// ��ӡ��ʾtest�е�nameList����
		System.out.println("test:" + test.get());

	}
}
