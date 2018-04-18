#pragma once
#include "abstractcompany.h"

/*
С�׹�˾
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

