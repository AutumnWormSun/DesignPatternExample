#pragma once
#include "Duck.h"
#include "FlyWithWings.h"
#include "Quack.h"

//����ͻ���
class MallardDuck :
	public Duck
{
public:
	MallardDuck(void);

	void display();

	~MallardDuck(void);
};
