#pragma once
#include "./QuackBehavior.h"

//�������ɽ���
class Squeak :
	public QuackBehavior
{
public:
	Squeak(void);

	void quack();

	~Squeak(void);
};
