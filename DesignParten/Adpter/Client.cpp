#include "Client.h"


CClient::CClient(void)
{
}
CClient::CClient(CAnyalst* p):
	m_any(p)
{
}

CClient::~CClient(void)
{
}
void CClient::SetAnyalst(CAnyalst* p)
{
	this->m_any = p;
}

void CClient::PostRequirenmt(string str)
{
	if (m_any)
	{
		m_any->RecvRequirenmt(str);
	}
}
string CClient::GetMyResult()
{
	if (m_any)
	{
		return m_any->HandleRequirenmt();
	}
	return "";
}