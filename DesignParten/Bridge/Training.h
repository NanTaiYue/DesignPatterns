#pragma once
#include "itask.h"
class CTraining :
	public ITask
{
public:
	CTraining(void);
	virtual ~CTraining(void);
	virtual void handle(string);
};

