#pragma once

#include <iostream>
#include <cstring>
#include <list>
using namespace std;

/*
对象生成器，负责建立一个对象产生的过程
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

