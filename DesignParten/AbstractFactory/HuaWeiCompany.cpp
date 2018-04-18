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
		p->setMaker("��Ϊ��˾");
		p->setProductName("PC����");
	}
	return p;
}
IAbstractProduct* CHuaWeiCompany::MakeTelphone()
{
	IAbstractProduct* p = new CTelPhoneProduct();
	if (p)
	{
		p->setMaker("��Ϊ��˾");
		p->setProductName("��ҫ�ֻ�");
	}
	return p;
}
IAbstractProduct* CHuaWeiCompany::MakeAIRobot()
{
	IAbstractProduct* p = new CAIRobotProduct();
	if (p)
	{
		p->setMaker("��Ϊ��˾");
		p->setProductName("AI������");
	}
	return p;
}