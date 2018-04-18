#pragma once
#include "abstractcompany.h"
/*
华为公司
*/

class CHuaWeiCompany :
	public IAbstractCompany
{
public:
	CHuaWeiCompany(void);
	virtual ~CHuaWeiCompany(void);
	virtual IAbstractProduct* MakeComputer();
	virtual IAbstractProduct* MakeTelphone();
	virtual IAbstractProduct* MakeAIRobot();
};

