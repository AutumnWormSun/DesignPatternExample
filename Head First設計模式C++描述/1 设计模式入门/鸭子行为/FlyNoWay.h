#pragma once
#include "FlyBehavior.h"

//���������Ϊ
class FlyNoWay :
	public FlyBehavior
{
public:
	FlyNoWay(void);

	void fly();

	~FlyNoWay(void);
};
