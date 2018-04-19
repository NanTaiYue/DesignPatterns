#include "IAbstractFamilyInfo.h"


IAbstractFamilyInfo::IAbstractFamilyInfo(void)
{
	m_familyaddr = "xx村yy号";
	m_familynum = 5;
}


IAbstractFamilyInfo::~IAbstractFamilyInfo(void)
{
}
void IAbstractFamilyInfo::PrintSelf()
{
	cout<<"我叫："<<m_name.c_str()<<", 家住："<<m_familyaddr.c_str()<<",家里有"<<m_familynum<<"个人，我今年："<<m_age<<"岁，身高："<<m_height<<"m，联系电话："<<m_telphone.c_str()<<endl;
}