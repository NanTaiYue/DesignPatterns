#pragma once
/*
սʿ�࣬�̳���Ӣ����
*/
#include "ihero.h"
class CFighter :
	public IHero
{
public:
	CFighter(void);
	virtual ~CFighter(void);
	virtual void Attack();
	virtual void Defense();
	virtual void Walk();
	virtual void Flash();
};

