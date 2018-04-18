#pragma once
#include "ishapemaker.h"

/*
怪物建造器，继承自IShapeMaker，实现具体的建造过程
*/

class CMonsterMaker :
	public IShapeMaker
{
public:
	CMonsterMaker(void);
	virtual ~CMonsterMaker(void);
	virtual void makeShapeBaseAttr();
	virtual void makeShapeAI();
	virtual void makeShapeAttackWay() ;
	virtual void makeShapeDefenseWay();
};

