package com.demo;

/**
 * ��������
 * 
 * @author
 * 
 */
public class Manager {
	// ������
	public void process() {

		// ����������Ϣ
		Dept deptA = new Dept("����A");
		Dept deptB = new Dept("����B");

		// Ϊ�������Ա��
		deptA.addEmployee("����");
		deptA.addEmployee("����");
		deptB.addEmployee("����");
		deptB.addEmployee("����");

		// չʾ������Ϣ
		deptA.show();
		deptB.show();
	}
}
