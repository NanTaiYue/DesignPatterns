#pragma once
#include "IShapeMaker.h"
/*
具体的一个建造对象
*/

class CMonster
{
private:
	IShapeMaker* m_maker;
public:
	CMonster(void);
	CMonster(IShapeMaker*);
	virtual ~CMonster(void);
	void setMaker(IShapeMaker*);
	void make();
	void showself();
};

