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
		p->setMaker("С�׹�˾");
		p->setProductName("PC����");
	}
	return p;
}
CAbstractProduct* CXiaoMiCompany::MakeTelphone()
{
	CAbstractProduct* p = new CTelPhoneProduct();
	if (p)
	{
		p->setMaker("С�׹�˾");
		p->setProductName("����3S�ֻ�");
	}
	return p;
}
CAbstractProduct* CXiaoMiCompany::MakeAIRobot()
{
	CAbstractProduct* p = new CAIRobotProduct();
	if (p)
	{
		p->setMaker("С�׹�˾");
		p->setProductName("AIɨ�ػ�����");
	}
	return p;
}