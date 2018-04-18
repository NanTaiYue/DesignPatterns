#pragma once
#include "ihero.h"
class CShooter :
	public IHero
{
public:
	CShooter(void);
	virtual ~CShooter(void);
	virtual void Attack();
	virtual void Defense();
	virtual void Walk();
	virtual void Flash();
};

