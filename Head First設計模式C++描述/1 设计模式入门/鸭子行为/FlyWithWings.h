#pragma once
#include "FlyBehavior.h"

//���������Ϊ
class FlyWithWings :
	public FlyBehavior
{
public:
	FlyWithWings(void);

	void fly();

	~FlyWithWings(void);
};
