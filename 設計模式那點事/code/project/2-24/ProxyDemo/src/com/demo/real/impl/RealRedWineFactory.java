package com.demo.real.impl;

import com.demo.real.IRedWine;

/**
 * ������������ƹ���
 * 
 * @author
 * 
 */
public class RealRedWineFactory implements IRedWine {
	// ������Ʒ���
	@Override
	public void product() {
		System.out.println("��ƹ����������...");
	}

	// ���۾Ʒ���
	public void sell() {
		System.out.println("��ƹ������ۺ��...");
	}

}
