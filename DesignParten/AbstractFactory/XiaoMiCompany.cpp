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
CAbstractProduct* CXiaoMiCompany::MakeComputer()
{
	CAbstractProduct* p = new CComputerProduct();
	if (p)
	{
		p->setMaker("小米公司");
		p->setProductName("PC电脑");
	}
	return p;
}
CAbstractProduct* CXiaoMiCompany::MakeTelphone()
{
	CAbstractProduct* p = new CTelPhoneProduct();
	if (p)
	{
		p->setMaker("小米公司");
		p->setProductName("红米3S手机");
	}
	return p;
}
CAbstractProduct* CXiaoMiCompany::MakeAIRobot()
{
	CAbstractProduct* p = new CAIRobotProduct();
	if (p)
	{
		p->setMaker("小米公司");
		p->setProductName("AI扫地机器人");
	}
	return p;
}