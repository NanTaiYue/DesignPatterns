#include "AbstractCompany.h"
#include "AbstractProduct.h"
#include "XiaoMiCompany.h"
#include "HuaWeiCompany.h"
/*
���󹤳�����������һ������Ĺ�����������������̳��Ը���������������е�һЩ�ֶΣ�������ʵ��������������
			  ͬʱ����ó��󹤳��Ļ���һ���������Ʒ���࣬����ָ�����಻ͬ����Ʒ������������������������
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