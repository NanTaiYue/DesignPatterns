#include "AbstractProduct.h"


CAbstractProduct::CAbstractProduct(void)
{
}


CAbstractProduct::~CAbstractProduct(void)
{
}

string CAbstractProduct::getProductName() const
{
	return this->m_productname;
}
void CAbstractProduct::setProductName(string name)
{
	this->m_productname = name;
}
void CAbstractProduct::setMaker(string maker)
{
	this->m_maker = maker;
}
string CAbstractProduct::getMaker() const
{
	return	this->m_maker;
}

void CAbstractProduct::printSelf()
{
	cout<<"����( "<<this->m_maker.c_str()<<" )�����( "<<this->m_productname.c_str()<<" )"<<endl;
}