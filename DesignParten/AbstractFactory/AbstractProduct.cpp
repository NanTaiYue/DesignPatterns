#include "AbstractProduct.h"


IAbstractProduct::IAbstractProduct(void)
{
}


IAbstractProduct::~IAbstractProduct(void)
{
}

string IAbstractProduct::getProductName() const
{
	return this->m_productname;
}
void IAbstractProduct::setProductName(string name)
{
	this->m_productname = name;
}
void IAbstractProduct::setMaker(string maker)
{
	this->m_maker = maker;
}
string IAbstractProduct::getMaker() const
{
	return	this->m_maker;
}

void IAbstractProduct::printSelf()
{
	cout<<"这是( "<<this->m_maker.c_str()<<" )制造的( "<<this->m_productname.c_str()<<" )"<<endl;
}