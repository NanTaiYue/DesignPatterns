#pragma once
/*
分析员，负责接收client对象的需求，并通知Programer对象进行设计，并返回结果给client对象
*/
#include <iostream>
#include <cstring>
using namespace std;
class CProgramer;

class CAnyalst
{
private:
	CProgramer* m_pro;
	string m_req;
public:
	CAnyalst(void);
	CAnyalst(CProgramer*);
	virtual ~CAnyalst(void);
	void SetProgramer(CProgramer*);
	void RecvRequirenmt(string str);  // 接收需求
	string HandleRequirenmt();  // 处理需求,并返回结果
};

