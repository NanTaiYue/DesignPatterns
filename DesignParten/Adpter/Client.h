#pragma once
#include "Anyalst.h"
#include <iostream>
#include <cstring>

using namespace std;
/*
�ͻ������ṩ����
*/
class CClient
{
private:
	CAnyalst* m_any;  // ����Ա����
public:
	CClient(void);
	CClient(CAnyalst* pAny);  // ��ʼ��ʱ��һ������Ա����
	virtual ~CClient(void);
	void SetAnyalst(CAnyalst*);
	void PostRequirenmt(string str); // Ͷ��һ������
	string GetMyResult();  // ��ȡ���
};

