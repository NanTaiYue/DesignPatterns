#pragma once
#include "AbstractProduct.h"
/*
һЩ��������˾�ĳ���
��Щ��˾��������ԣ�Ҳ�������ֻ�����������AI������
*/
class IAbstractCompany
{
public:
	IAbstractCompany(void);
	virtual ~IAbstractCompany(void);
	virtual IAbstractProduct* MakeComputer() = 0;
	virtual IAbstractProduct* MakeTelphone() = 0;
	virtual IAbstractProduct* MakeAIRobot() = 0;
};

