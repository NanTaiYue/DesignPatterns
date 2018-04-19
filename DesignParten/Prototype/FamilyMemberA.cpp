#include "FamilyMemberA.h"


CFamilyMemberA::CFamilyMemberA(void)
{
}


CFamilyMemberA::~CFamilyMemberA(void)
{
}
IAbstractFamilyInfo* CFamilyMemberA::clone()
{
	IAbstractFamilyInfo* p = new CFamilyMemberA();
	/*p->SetName("zhb");
	p->SetHeight(1.72);
	p->SetAge(26);
	p->SetTelphone("123456");*/
	return p;
}

void CFamilyMemberA::SetAge(int a)
{
	m_age = a;
}
void CFamilyMemberA::SetHeight(float l)
{
	m_height = l;
}
void CFamilyMemberA::SetName(string name)
{
	m_name = name;
}
void CFamilyMemberA::SetTelphone(string str)
{
	m_telphone = str;
}
