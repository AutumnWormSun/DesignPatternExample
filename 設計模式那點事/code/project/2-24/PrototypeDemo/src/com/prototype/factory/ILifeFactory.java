package com.prototype.factory;

import com.prototype.pojo.DayLife;

/**
 * ������
 * 
 * @author
 * 
 */
public interface ILifeFactory {
	/**
	 * ����DayLife����
	 * 
	 * @return
	 */
	public DayLife getNewInstance();
}
