#include "IHero.h"


IHero::IHero(void)
{
}


IHero::~IHero(void)
{
}

HEROTYPE IHero::getType() const
{
	return this->m_herotype;
}
void IHero::setType(HEROTYPE tp)
{
	this->m_herotype = tp;
}
string IHero::getName() const
{
	return this->m_name;
}
void IHero::setName(string name)
{
	this->m_name = name;
}