#pragma once
#include "icompany.h"
class CXiaomiProxy :
	public ICompany
{
private:
	ICompany* m_com;
public:
	CXiaomiProxy(void);
	virtual ~CXiaomiProxy(void);

	virtual void SetProxyCompany(ICompany*);

	virtual void request(string);
	virtual string response();
};

