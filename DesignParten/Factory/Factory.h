#pragma once
/*
����Ӣ�۵Ĺ���
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

