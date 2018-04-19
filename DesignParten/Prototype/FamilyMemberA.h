#pragma once
#include "iabstractfamilyinfo.h"
class CFamilyMemberA :
	public IAbstractFamilyInfo
{
public:
	CFamilyMemberA(void);
	virtual ~CFamilyMemberA(void);
	virtual IAbstractFamilyInfo* clone();
	virtual void SetTelphone(string);
	virtual void SetHeight(float);
	virtual void SetAge(int);
	virtual void SetName(string);
};

