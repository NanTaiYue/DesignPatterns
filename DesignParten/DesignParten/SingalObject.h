#pragma once

#include <iostream>
#include <cstring>

using namespace std;

/*
单例类，全局只有唯一的对象
*/

class CSingalObject
{
private:
	static CSingalObject* m_pIns;  // self对象
	string _name;
protected:
	CSingalObject(void);
	CSingalObject(const CSingalObject& obj); // 去掉复制构造函数
	CSingalObject& operator = (const CSingalObject&); // 去掉赋值函数
public:
	static CSingalObject* GetInstance();
	virtual ~CSingalObject(void);

	string GetName() const;  // 常成员函数，确保该函数不会修改类对象数据
	void SetName(string);
};

