#pragma once
#include <iostream>
#include <cstring>

#include "ITask.h"

using namespace std;
/*
һ������Ĳ���
*/

class IDepartment
{
private:
	string m_name; // ��������
protected:
	ITask* m_task; // ����ִ�е�����
public:
	IDepartment(void);
	IDepartment(string);
	virtual ~IDepartment(void);

	virtual string getName() const;
	virtual void setName(string);

	virtual void setTask(ITask*);
	virtual void doTask(string) = 0;  // ִ�о��������ɸ�������Ĳ���ȥִ��
};

