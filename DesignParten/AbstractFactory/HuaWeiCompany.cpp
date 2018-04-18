#include "HuaWeiCompany.h"
#include "ComputerProduct.h"
#include "TelPhoneProduct.h"
#include "AIRobotProduct.h"

CHuaWeiCompany::CHuaWeiCompany(void)
{
}


CHuaWeiCompany::~CHuaWeiCompany(void)
{
}
CAbstractProduct* CHuaWeiCompany::MakeComputer()
{
	CAbstractProduct* p = new CComputerProduct();
	if (p)
	{
		p->setMaker("华为公司");
		p->setProductName("PC电脑");
	}
	return p;
}
CAbstractProduct* CHuaWeiCompany::MakeTelphone()
{
	CAbstractProduct* p = new CTelPhoneProduct();
	if (p)
	{
		p->setMaker("华为公司");
		p->setProductName("荣耀手机");
	}
	return p;
}
CAbstractProduct* CHuaWeiCompany::MakeAIRobot()
{
	CAbstractProduct* p = new CAIRobotProduct();
	if (p)
	{
		p->setMaker("华为公司");
		p->setProductName("AI机器人");
	}
	return p;
}