#pragma once
#include "idepartment.h"
class CDepDepartment :
	public IDepartment
{
public:
	CDepDepartment(void);
	CDepDepartment(string);
	virtual ~CDepDepartment(void);
	virtual void doTask(string);
};

