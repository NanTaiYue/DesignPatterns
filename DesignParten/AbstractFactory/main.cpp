#include "AbstractCompany.h"
#include "AbstractProduct.h"
#include "XiaoMiCompany.h"
#include "HuaWeiCompany.h"
/*
抽象工厂方法：创建一个抽象的工厂，这个工厂表明继承自该类的其他工厂具有的一些手段，其具体的实现由子类来决定
			  同时伴随该抽象工厂的还有一个抽象的物品基类，用于指定各类不同的物品，其具体的属性由子类来决定
*/
int main()
{
	IAbstractCompany* pXiaomi = new CXiaoMiCompany();
	if (pXiaomi)
	{
		IAbstractProduct* pComputer = pXiaomi->MakeComputer();
		if (pComputer)
			pComputer->printSelf();
		IAbstractProduct* pTelPhone = pXiaomi->MakeTelphone();
		if (pTelPhone)
			pTelPhone->printSelf();
		IAbstractProduct* pAIRobot = pXiaomi->MakeAIRobot();
		if (pAIRobot)
			pAIRobot->printSelf();
		delete pComputer;
		delete pTelPhone;
		delete pAIRobot;
		delete pXiaomi;
	}
	IAbstractCompany* pHuawei = new CHuaWeiCompany();
	if (pHuawei)
	{
		IAbstractProduct* pComputer = pHuawei->MakeComputer();
		if (pComputer)
			pComputer->printSelf();
		IAbstractProduct* pTelPhone = pHuawei->MakeTelphone();
		if (pTelPhone)
			pTelPhone->printSelf();
		IAbstractProduct* pAIRobot = pHuawei->MakeAIRobot();
		if (pAIRobot)
			pAIRobot->printSelf();
		delete pComputer;
		delete pTelPhone;
		delete pAIRobot;
		delete pHuawei;
	}
	system("pause");
	return 0;
}