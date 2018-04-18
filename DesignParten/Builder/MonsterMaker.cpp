#include "MonsterMaker.h"


CMonsterMaker::CMonsterMaker(void)
{
}


CMonsterMaker::~CMonsterMaker(void)
{
}
void CMonsterMaker::makeShapeBaseAttr()
{
	m_proc.push_back("建造Shape基础属性");
}
void CMonsterMaker::makeShapeAI()
{
	m_proc.push_back("建造Shape的AI");
}
void CMonsterMaker::makeShapeAttackWay() 
{
	m_proc.push_back("建造Shape的攻击方式");
}
void CMonsterMaker::makeShapeDefenseWay()
{
	m_proc.push_back("建造Shape的防御方式");
}