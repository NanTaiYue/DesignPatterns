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
		p->setMaker("��Ϊ��˾");
		p->setProductName("PC����");
	}
	return p;
}
CAbstractProduct* CHuaWeiCompany::MakeTelphone()
{
	CAbstractProduct* p = new CTelPhoneProduct();
	if (p)
	{
		p->setMaker("��Ϊ��˾");
		p->setProductName("��ҫ�ֻ�");
	}
	return p;
}
CAbstractProduct* CHuaWeiCompany::MakeAIRobot()
{
	CAbstractProduct* p = new CAIRobotProduct();
	if (p)
	{
		p->setMaker("��Ϊ��˾");
		p->setProductName("AI������");
	}
	return p;
}