#pragma once
/*
����Ա���������client��������󣬲�֪ͨProgramer���������ƣ������ؽ����client����
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
	void RecvRequirenmt(string str);  // ��������
	string HandleRequirenmt();  // ��������,�����ؽ��
};

