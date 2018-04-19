#pragma once

#include <iostream>
#include <cstring>

using namespace std;

/*
一个抽象的家庭信息描述，家庭成员中，其家庭住址，成员数量等相关信息是一致的，不一致的是每个家庭成员自己的电话号码，身高，年龄不同
*/
class IAbstractFamilyInfo
{
private:
	string m_familyaddr;
	int m_familynum;
protected:
	string m_telphone;
	float m_height;
	int m_age;
	string m_name;
public:
	IAbstractFamilyInfo(void);
	virtual ~IAbstractFamilyInfo(void);
	virtual IAbstractFamilyInfo* clone() = 0;
	virtual void SetTelphone(string) = 0;
	virtual void SetHeight(float) = 0;
	virtual void SetAge(int) = 0;
	virtual void SetName(string) = 0;
	virtual void PrintSelf();
};

