#include "Monster.h"


CMonster::CMonster(void)
{
}
CMonster::CMonster(IShapeMaker* maker):
	m_maker(maker)
{
}

CMonster::~CMonster(void)
{
}

void CMonster::setMaker(IShapeMaker* maker)
{
	this->m_maker = maker;
}

void CMonster::make()
{
	m_maker->makeShapeBaseAttr();
	m_maker->makeShapeAI();
	m_maker->makeShapeAttackWay();
	m_maker->makeShapeDefenseWay();
}
void CMonster::showself()
{
	m_maker->Show();
}