package com.demo.dynamic;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;

/**
 * ʵ�ʵĴ�����
 * 
 * @author
 * 
 */
public class TargetImpl implements InvocationHandler {

	// ʵ�ַ���
	@Override
	public Object invoke(Object proxy, Method method, Object[] args)
			throws Throwable {

		System.out.println("--method:" + method.getName());
		System.out.println("--��̬������ʵ�֣�����");
		return null;
	}

}
