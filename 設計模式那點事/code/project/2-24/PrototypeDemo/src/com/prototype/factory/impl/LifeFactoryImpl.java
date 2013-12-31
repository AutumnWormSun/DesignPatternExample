package com.prototype.factory.impl;

import com.prototype.factory.ILifeFactory;
import com.prototype.pojo.DayLife;

/**
 * ����ʵ����
 * 
 * @author
 * 
 */
public class LifeFactoryImpl implements ILifeFactory {

	// DayLife����ʵ�����ڳ�ʼ��
	private static DayLife dayLife = null;

	/**
	 * getNewInstance����ʵ�֣�
	 * 
	 * �����ж�dayLife�Ƿ�Ϊnull��
	 * �����null����ʹ��new����һ��DayLife����ͬʱ���ó�ʼ���ݣ�Ȼ��ֵ��dayLife����ʵ����Ȼ�󷵻أ�
	 * �������null����ʹ��dayLift��clone��������һ���¶��󲢸��Ƹ�dayLife����Ȼ�󷵻�
	 */
	@Override
	public DayLife getNewInstance() {
		// �ж�dayLife�Ƿ�Ϊnull
		if (dayLife == null) {
			// ���Ϊnull
			// �����ʹ��new �����Ķ���ע�⣺new���ֻʹ��һ��Ŷ��
			System.out.println(" new DayLife !");
			// ����dayLife����
			dayLife = new DayLife();
			dayLife.setGetUp("7:00��");
			dayLife.setByBus("7:30��������");
			dayLife.setGetFood("8:30����˾�����Ĺ���վ�³�������·�Ե���ͳ�ʱ��˳��������һ�������˾");
			dayLife.setNoon("����ڹ�˾������С�͹ݽ����Ȼ���ڰ칫�ҵ�������С�һ��");
			dayLife.setAfternoonWork("13:30��ʼ������Ĺ���");
			dayLife.setGoHome("17:30׼ʱ�°�");
			dayLife.setNight("������������");
		} else {
			// �����Ϊnull
			// �����ʹ��clone���������Ķ���
			System.out.println(" clone DayLife !");
			// ��clone����ֵ��dayLife ������
			dayLife = dayLife.clone();
		}
		return dayLife;
	}
}
