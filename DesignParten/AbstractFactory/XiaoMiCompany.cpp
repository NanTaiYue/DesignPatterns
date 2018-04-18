#include "XiaoMiCompany.h"
#include "ComputerProduct.h"
#include "TelPhoneProduct.h"
#include "AIRobotProduct.h"

CXiaoMiCompany::CXiaoMiCompany(void)
{
}


CXiaoMiCompany::~CXiaoMiCompany(void)
{
}
IAbstractProduct* CXiaoMiCompany::MakeComputer()
{
	IAbstractProduct* p = new CComputerProduct();
	if (p)
	{
		p->setMaker("小米公司");
		p->setProductName("PC电脑");
	}
	return p;
}
IAbstractProduct* CXiaoMiCompany::MakeTelphone()
{
	IAbstractProduct* p = new CTelPhoneProduct();
	if (p)
	{
		p->setMaker("小米公司");
		p->setProductName("红米3S手机");
	}
	return p;
}
IAbstractProduct* CXiaoMiCompany::MakeAIRobot()
{
	IAbstractProduct* p = new CAIRobotProduct();
	if (p)
	{
		p->setMaker("小米公司");
		p->setProductName("AI扫地机器人");
	}
	return p;
}