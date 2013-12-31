package com.demo.interpreter;

import com.demo.interpreter.express.IExpressions;
import com.demo.interpreter.express.ProgramExpression;

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
		// myida�������
		String str = "PROGRAM PRINTLN start... FOR i FROM 90 TO 100 PRINTLN i END PRINTLN end... END";
		System.out.println("str:" + str);
		// ����PROGRAM���ʽ
		IExpressions expressions = new ProgramExpression(str);
		// ����ִ��
		expressions.interpret();
	}
}
