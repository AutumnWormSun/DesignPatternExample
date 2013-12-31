package com.demo.buider;

import com.demo.buider.director.MobileDirector;
import com.demo.buider.itf.MobileBuilderImpl1;
import com.demo.buider.itf.MobileBuilderImpl2;
import com.demo.buider.model.MobilePackage;

public class MainApp
{

	/**
	 * 主应用程序
	 * 
	 * @param args
	 */
	public static void main(String[] args)
	{
		// 创建指导者
		MobileDirector mobileDirector = new MobileDirector();
		// 套餐1
		MobileBuilderImpl1 mobileBuilderImpl1 = new MobileBuilderImpl1();
		// 套餐2
		MobileBuilderImpl2 mobileBuilderImpl2 = new MobileBuilderImpl2();

		printMessage(mobileDirector.createMobilePackage(mobileBuilderImpl1));

		printMessage(mobileDirector.createMobilePackage(mobileBuilderImpl2));

	}

	/**
	 * 打印输出套餐信息
	 */
	public static void printMessage(MobilePackage mobilePackage)
	{
		System.out.println("--话费：" + mobilePackage.getMoney() + "\t短信：" + mobilePackage.getShortInfo() + "条\t彩玲：" + mobilePackage.getMusic());
	}
}
