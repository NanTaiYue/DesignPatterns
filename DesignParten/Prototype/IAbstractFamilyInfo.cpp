#include "IAbstractFamilyInfo.h"


IAbstractFamilyInfo::IAbstractFamilyInfo(void)
{
	m_familyaddr = "xx��yy��";
	m_familynum = 5;
}


IAbstractFamilyInfo::~IAbstractFamilyInfo(void)
{
}
void IAbstractFamilyInfo::PrintSelf()
{
	cout<<"�ҽУ�"<<m_name.c_str()<<", ��ס��"<<m_familyaddr.c_str()<<",������"<<m_familynum<<"���ˣ��ҽ��꣺"<<m_age<<"�꣬��ߣ�"<<m_height<<"m����ϵ�绰��"<<m_telphone.c_str()<<endl;
}