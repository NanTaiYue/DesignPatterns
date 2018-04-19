#pragma once
#include <iostream>
#include <cstring>
using namespace std;
/*
一些抽象的任务
*/

class ITask
{
public:
	ITask(void);
	virtual ~ITask(void);
	virtual void handle(string) = 0;
};

