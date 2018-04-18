#pragma once
/*
生产英雄的工厂
*/
#include "IHero.h"

struct HeroAttr
{
	string name;
	HEROTYPE tp;
};

class CFactory
{
public:
	CFactory(void);
	virtual ~CFactory(void);

	IHero* CreateHero(HeroAttr);
};

