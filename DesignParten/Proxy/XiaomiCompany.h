#pragma once
#include "icompany.h"
class CXiaomiCompany :
	public ICompany
{
public:
	CXiaomiCompany(void);
	virtual ~CXiaomiCompany(void);
	virtual void request(string);
	virtual string response();
};

