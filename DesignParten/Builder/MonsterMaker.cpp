#include "MonsterMaker.h"


CMonsterMaker::CMonsterMaker(void)
{
}


CMonsterMaker::~CMonsterMaker(void)
{
}
void CMonsterMaker::makeShapeBaseAttr()
{
	m_proc.push_back("����Shape��������");
}
void CMonsterMaker::makeShapeAI()
{
	m_proc.push_back("����Shape��AI");
}
void CMonsterMaker::makeShapeAttackWay() 
{
	m_proc.push_back("����Shape�Ĺ�����ʽ");
}
void CMonsterMaker::makeShapeDefenseWay()
{
	m_proc.push_back("����Shape�ķ�����ʽ");
}