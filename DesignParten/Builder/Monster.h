#pragma once
#include "IShapeMaker.h"
/*
�����һ���������
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

