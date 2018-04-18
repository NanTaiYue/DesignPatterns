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
		p->setMaker("С�׹�˾");
		p->setProductName("PC����");
	}
	return p;
}
IAbstractProduct* CXiaoMiCompany::MakeTelphone()
{
	IAbstractProduct* p = new CTelPhoneProduct();
	if (p)
	{
		p->setMaker("С�׹�˾");
		p->setProductName("����3S�ֻ�");
	}
	return p;
}
IAbstractProduct* CXiaoMiCompany::MakeAIRobot()
{
	IAbstractProduct* p = new CAIRobotProduct();
	if (p)
	{
		p->setMaker("С�׹�˾");
		p->setProductName("AIɨ�ػ�����");
	}
	return p;
}