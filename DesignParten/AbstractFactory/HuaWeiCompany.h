#pragma once
#include "abstractcompany.h"
/*
��Ϊ��˾
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

