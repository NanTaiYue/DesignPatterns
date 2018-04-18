#pragma once

#include <iostream>
#include <cstring>
#include <list>
using namespace std;

/*
������������������һ����������Ĺ���
*/
class IShapeMaker
{
protected:
	list<string> m_proc;
public:
	IShapeMaker(void);
	virtual ~IShapeMaker(void);
	virtual void makeShapeBaseAttr() = 0;
	virtual void makeShapeAI() = 0;
	virtual void makeShapeAttackWay() = 0;
	virtual void makeShapeDefenseWay() = 0;
	virtual void Show();
};

