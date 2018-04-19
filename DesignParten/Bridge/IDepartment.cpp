#include "IDepartment.h"


IDepartment::IDepartment(void)
{
}
IDepartment::IDepartment(string name):
	m_name(name)
{
}

IDepartment::~IDepartment(void)
{
}
string IDepartment::getName() const
{
	return this->m_name;
}
void IDepartment::setName(string name)
{
	this->m_name = name;
}

void IDepartment::setTask(ITask* task)
{
	this->m_task = task;
}