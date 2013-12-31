package com.demo;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * ������
 * 
 * @author
 * 
 */
public class Dept {
	// ��������
	private String name;
	// Ա���б�
	private List<Employee> employeeList;

	public Dept(String name) {
		this.name = name;
		this.employeeList = new ArrayList<Employee>();
	}

	/**
	 * ���Ա����Ϣ
	 * 
	 * @param employee
	 */
	public void addEmployee(String employeeName) {
		this.employeeList.add(new Employee(employeeName));
	}

	/**
	 * չʾ������Ϣ
	 */
	public void show() {
		System.out.println("===============");
		System.out.println("�������ƣ�" + this.name);
		System.out.println("����Ա����");

		Iterator<Employee> iterator = this.employeeList.iterator();
		while (iterator.hasNext()) {
			System.out.println(" - " + iterator.next().getName());
		}
		System.out.println("===============");
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public List<Employee> getEmployeeList() {
		return employeeList;
	}

	public void setEmployeeList(List<Employee> employeeList) {
		this.employeeList = employeeList;
	}

}
