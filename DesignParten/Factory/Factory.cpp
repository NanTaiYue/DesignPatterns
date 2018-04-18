#include "Factory.h"
#include "Fighter.h"
#include "Shooter.h"


CFactory::CFactory(void)
{
}


CFactory::~CFactory(void)
{
}

IHero* CFactory::CreateHero(HeroAttr ha)
{
	IHero* pHero = nullptr;
	switch (ha.tp)
	{
	case HEROTYPE::FIGHTER:
		pHero = new CFighter();
		break;
	case HEROTYPE::SHOOTER:
		pHero = new CShooter();
		break;
	case HEROTYPE::MAGE:
		break;
	case HEROTYPE::AID:
		break;
	default:
		break;
	}
	if (pHero)
	{
		pHero->setType(ha.tp);
		pHero->setName(ha.name);
	}
	return pHero;
}