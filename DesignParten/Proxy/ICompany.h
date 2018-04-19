#pragma once

#include <iostream>
#include <cstring>

using namespace std;

class ICompany
{
protected:
	string m_task;
public:
	ICompany(void);
	virtual ~ICompany(void);
	virtual void request(string) = 0;
	virtual string response() = 0;
};

