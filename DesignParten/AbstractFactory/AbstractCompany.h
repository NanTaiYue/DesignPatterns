#pragma once
#include "AbstractProduct.h"
/*
一些工厂、公司的抽象
这些公司可以造电脑，也可以造手机，还可以造AI机器人
*/
class IAbstractCompany
{
public:
	IAbstractCompany(void);
	virtual ~IAbstractCompany(void);
	virtual IAbstractProduct* MakeComputer() = 0;
	virtual IAbstractProduct* MakeTelphone() = 0;
	virtual IAbstractProduct* MakeAIRobot() = 0;
};

