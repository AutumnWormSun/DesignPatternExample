package com.demo.interpreter.express;

import com.demo.interpreter.context.Context;

/**
 * 
 * ���ʽ�ӿ�
 * 
 * @author
 * 
 */
public interface IExpressions {

	/**
	 * ����
	 * 
	 * @param context
	 */
	public void parse(Context context);

	/**
	 * ִ�з���
	 * 
	 * @param context
	 */
	public void interpret();
}
