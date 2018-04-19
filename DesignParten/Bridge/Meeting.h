#pragma once
#include "itask.h"
class CMeeting :
	public ITask
{
public:
	CMeeting(void);
	virtual ~CMeeting(void);
	virtual void handle(string);
};

