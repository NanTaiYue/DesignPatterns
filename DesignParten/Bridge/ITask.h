#pragma once
#include <iostream>
#include <cstring>
using namespace std;
/*
һЩ���������
*/

class ITask
{
public:
	ITask(void);
	virtual ~ITask(void);
	virtual void handle(string) = 0;
};

