#include "XiaomiCompany.h"


CXiaomiCompany::CXiaomiCompany(void)
{
}


CXiaomiCompany::~CXiaomiCompany(void)
{
}

void CXiaomiCompany::request(string str)
{
	m_task = "小米公司接受了请求：";
	m_task.append(str);
}
string CXiaomiCompany::response()
{
	return m_task;
}