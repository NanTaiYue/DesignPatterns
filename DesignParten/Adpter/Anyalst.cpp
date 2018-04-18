#include "Anyalst.h"
#include "Programer.h"

CAnyalst::CAnyalst(void)
{
}
CAnyalst::CAnyalst(CProgramer* p)
	:m_pro(p)
{
}

CAnyalst::~CAnyalst(void)
{
}
void CAnyalst::SetProgramer(CProgramer* p)
{
	this->m_pro = p;
}

void CAnyalst::RecvRequirenmt(string str)
{
	m_req = str;
}
string CAnyalst::HandleRequirenmt()
{
	if (m_pro)
	{
		return m_pro->Handle(m_req);
	}
	return "";
}