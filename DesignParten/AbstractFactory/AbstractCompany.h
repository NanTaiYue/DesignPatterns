#pragma once
#include "AbstractProduct.h"
/*
һЩ��������˾�ĳ���
��Щ��˾��������ԣ�Ҳ�������ֻ�����������AI������
*/
class CAbstractCompany
{
public:
	CAbstractCompany(void);
	virtual ~CAbstractCompany(void);
	virtual CAbstractProduct* MakeComputer() = 0;
	virtual CAbstractProduct* MakeTelphone() = 0;
	virtual CAbstractProduct* MakeAIRobot() = 0;
};

