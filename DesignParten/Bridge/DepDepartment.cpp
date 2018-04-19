#include "DepDepartment.h"


CDepDepartment::CDepDepartment(void)
{
}
CDepDepartment::CDepDepartment(string name):
	IDepartment(name)
{
}

CDepDepartment::~CDepDepartment(void)
{
}

void CDepDepartment::doTask(string str)
{
	m_task->handle(str);
}