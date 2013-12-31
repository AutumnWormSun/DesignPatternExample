package com.demo;

import com.demo.proxy.RedWineProxy;
import com.demo.real.IRedWine;
import com.demo.real.impl.RealRedWineFactory;

/**
 * ��Ӧ�ó���
 * 
 * @author
 * 
 */
public class Client {

	/**
	 * @param args
	 */
	public static void main(String[] args) {

		// ������ʵ��ƹ�������ʵ��
		IRedWine realRedWineFactory = new RealRedWineFactory();
		// ��ô������ʵ��
		IRedWine redWineProxy = new RedWineProxy(realRedWineFactory);
		// ������������ƣ���ʵ�������������ǹ�����
		redWineProxy.product();
		// ���������ۺ�ƣ��������û���Ȼ��ϸ߼۸���ۣ�׬ȡ�������
		redWineProxy.sell();
	}
}
