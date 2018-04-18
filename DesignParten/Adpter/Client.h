#pragma once
#include "Anyalst.h"
#include <iostream>
#include <cstring>

using namespace std;
/*
客户对象，提供需求
*/
class CClient
{
private:
	CAnyalst* m_any;  // 分析员对象
public:
	CClient(void);
	CClient(CAnyalst* pAny);  // 初始化时绑定一个分析员对象
	virtual ~CClient(void);
	void SetAnyalst(CAnyalst*);
	void PostRequirenmt(string str); // 投递一个需求
	string GetMyResult();  // 获取结果
};

