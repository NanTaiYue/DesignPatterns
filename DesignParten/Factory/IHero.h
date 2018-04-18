#pragma once

#include <cstring>
#include <iostream>

using namespace std;

/*
Ӣ�ۻ���
*/
enum HEROTYPE
{
	FIGHTER = 1,
	SHOOTER,
	MAGE,
	AID,
};

class IHero
{
private:
	HEROTYPE m_herotype;
	string m_name;
public:
	IHero(void);
	virtual ~IHero(void);
	virtual void Attack() = 0;  // ����
	virtual void Defense() = 0; // ����
	virtual void Walk() = 0;
	virtual void Flash() = 0;
public:
	HEROTYPE getType() const;
	void setType(HEROTYPE);
	string getName() const;
	void setName(string);
};

