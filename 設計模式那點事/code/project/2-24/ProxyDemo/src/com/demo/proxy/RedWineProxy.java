package com.demo.proxy;

import com.demo.real.IRedWine;

/**
 * ��ƴ�����
 * 
 * @author
 * 
 */
public class RedWineProxy implements IRedWine {

	// �����ĺ����������
	private final IRedWine redWine;
	// �����̳��ۺ�Ƶ�Ȩ��
	private final boolean permission = true;

	// Ĭ�Ϲ��췽��
	public RedWineProxy(IRedWine redWine) {
		this.redWine = redWine;
	}

	// ������������Ʒ����������̲�������ƣ��������Ĺ����þ����ۣ�
	@Override
	public void product() {
		// �жϴ������Ƿ���к�ƴ���Ȩ
		if (this.permission) {
			// ��������Ȩ������� �ǺϷ���
			System.out.println("[ ���ǺϷ��ĺ�ƴ����� ]");
			System.out.println("�����̽ӵ�������֪ͨ��������...");
			this.redWine.product();
		} else {
			System.out.println("[ ���ǷǷ��ĺ�ƴ����̣�]");
		}

	}

	// ���������ۺ�Ʒ���
	@Override
	public void sell() {
		if (this.permission) {
			this.redWine.sell();
			System.out.println("�����̴ӹ����õ������ۺ�ƣ�Ȼ���Խϸ߼۸����ۣ�����׬ȡһ���Ĳ��...");
		} else {
			System.out.println("[ ���ǷǷ��ĺ�ƴ����̣�]");
		}
	}

}
