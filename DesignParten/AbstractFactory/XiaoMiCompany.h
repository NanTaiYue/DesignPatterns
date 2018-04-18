#pragma once
#include "abstractcompany.h"

/*
小米公司
*/
class CXiaoMiCompany :
	public CAbstractCompany
{
public:
	CXiaoMiCompany(void);
	virtual ~CXiaoMiCompany(void);
	virtual CAbstractProduct* MakeComputer();
	virtual CAbstractProduct* MakeTelphone();
	virtual CAbstractProduct* MakeAIRobot();
};

