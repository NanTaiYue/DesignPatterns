#include "XiaomiProxy.h"


CXiaomiProxy::CXiaomiProxy(void)
{
}


CXiaomiProxy::~CXiaomiProxy(void)
{
}

void CXiaomiProxy::SetProxyCompany(ICompany* com)
{
	this->m_com = com;
}
string CXiaomiProxy::response()
{
	return m_com->response();
}
void CXiaomiProxy::request(string str)
{
	m_com->request(str);
}
