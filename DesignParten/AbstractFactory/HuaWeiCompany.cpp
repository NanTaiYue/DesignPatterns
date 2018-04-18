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
IAbstractProduct* CHuaWeiCompany::MakeComputer()
{
	IAbstractProduct* p = new CComputerProduct();
	if (p)
	{
		p->setMaker("华为公司");
		p->setProductName("PC电脑");
	}
	return p;
}
IAbstractProduct* CHuaWeiCompany::MakeTelphone()
{
	IAbstractProduct* p = new CTelPhoneProduct();
	if (p)
	{
		p->setMaker("华为公司");
		p->setProductName("荣耀手机");
	}
	return p;
}
IAbstractProduct* CHuaWeiCompany::MakeAIRobot()
{
	IAbstractProduct* p = new CAIRobotProduct();
	if (p)
	{
		p->setMaker("华为公司");
		p->setProductName("AI机器人");
	}
	return p;
}