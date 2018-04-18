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
	CAbstractCompany* pXiaomi = new CXiaoMiCompany();
	if (pXiaomi)
	{
		CAbstractProduct* pComputer = pXiaomi->MakeComputer();
		if (pComputer)
			pComputer->printSelf();
		CAbstractProduct* pTelPhone = pXiaomi->MakeTelphone();
		if (pTelPhone)
			pTelPhone->printSelf();
		CAbstractProduct* pAIRobot = pXiaomi->MakeAIRobot();
		if (pAIRobot)
			pAIRobot->printSelf();
		delete pComputer;
		delete pTelPhone;
		delete pAIRobot;
		delete pXiaomi;
	}
	CAbstractCompany* pHuawei = new CHuaWeiCompany();
	if (pHuawei)
	{
		CAbstractProduct* pComputer = pHuawei->MakeComputer();
		if (pComputer)
			pComputer->printSelf();
		CAbstractProduct* pTelPhone = pHuawei->MakeTelphone();
		if (pTelPhone)
			pTelPhone->printSelf();
		CAbstractProduct* pAIRobot = pHuawei->MakeAIRobot();
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