#include "Programer.h"


CProgramer::CProgramer(void)
{
}


CProgramer::~CProgramer(void)
{
}
string CProgramer::Handle(string str)
{
	char p[128] = {0};
	sprintf_s(p,"����Programer����:%s����OK��",str.c_str());
	return string(p);
}