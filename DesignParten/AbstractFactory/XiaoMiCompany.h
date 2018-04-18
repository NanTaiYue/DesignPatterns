#pragma once
#include "abstractcompany.h"

/*
小米公司
*/
class CXiaoMiCompany :
	public IAbstractCompany
{
public:
	CXiaoMiCompany(void);
	virtual ~CXiaoMiCompany(void);
	virtual IAbstractProduct* MakeComputer();
	virtual IAbstractProduct* MakeTelphone();
	virtual IAbstractProduct* MakeAIRobot();
};

