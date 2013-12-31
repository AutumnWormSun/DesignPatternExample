package com.demo;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Proxy;

import com.demo.dynamic.ITarget;
import com.demo.dynamic.TargetImpl;

/**
 * ��̬����ͻ���Ӧ�ó���
 * 
 * @author
 * 
 */
public class DynamicClient {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// ��ʵ�������
		InvocationHandler handler = new TargetImpl();

		// ������������������
		ITarget target = (ITarget) Proxy.newProxyInstance(ITarget.class
				.getClassLoader(), new Class[] { ITarget.class }, handler);

		// ��������
		target.operation();
	}
}
