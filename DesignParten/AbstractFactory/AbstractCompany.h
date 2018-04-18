#pragma once
#include "AbstractProduct.h"
/*
一些工厂、公司的抽象
这些公司可以造电脑，也可以造手机，还可以造AI机器人
*/
class CAbstractCompany
{
public:
	CAbstractCompany(void);
	virtual ~CAbstractCompany(void);
	virtual CAbstractProduct* MakeComputer() = 0;
	virtual CAbstractProduct* MakeTelphone() = 0;
	virtual CAbstractProduct* MakeAIRobot() = 0;
};

