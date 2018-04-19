#pragma once
#include <iostream>
#include <cstring>

#include "ITask.h"

using namespace std;
/*
一个抽象的部门
*/

class IDepartment
{
private:
	string m_name; // 部门名称
protected:
	ITask* m_task; // 部门执行的任务
public:
	IDepartment(void);
	IDepartment(string);
	virtual ~IDepartment(void);

	virtual string getName() const;
	virtual void setName(string);

	virtual void setTask(ITask*);
	virtual void doTask(string) = 0;  // 执行具体任务由各个具体的部门去执行
};

