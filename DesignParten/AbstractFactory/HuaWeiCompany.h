#pragma once
#include "abstractcompany.h"
/*
华为公司
*/

class CHuaWeiCompany :
	public CAbstractCompany
{
public:
	CHuaWeiCompany(void);
	virtual ~CHuaWeiCompany(void);
	virtual CAbstractProduct* MakeComputer();
	virtual CAbstractProduct* MakeTelphone();
	virtual CAbstractProduct* MakeAIRobot();
};

