#pragma once
/*
负责处理分析员提供的需求
*/
#include <iostream>
#include <cstring>
using namespace std;

class CProgramer
{
public:
	CProgramer(void);
	virtual ~CProgramer(void);
	string Handle(string req);
};

