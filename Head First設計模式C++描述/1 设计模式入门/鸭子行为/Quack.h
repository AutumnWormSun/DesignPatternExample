#pragma once
#include "QuackBehavior.h"

//�������ɽ���Ϊ
class Quack :
	public QuackBehavior
{
public:
	Quack(void);

	void quack();

	~Quack(void);
};
