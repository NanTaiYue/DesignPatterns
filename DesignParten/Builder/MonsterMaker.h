#pragma once
#include "ishapemaker.h"

/*
���ｨ�������̳���IShapeMaker��ʵ�־���Ľ������
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

