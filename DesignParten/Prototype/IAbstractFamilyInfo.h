#pragma once

#include <iostream>
#include <cstring>

using namespace std;

/*
һ������ļ�ͥ��Ϣ��������ͥ��Ա�У����ͥסַ����Ա�����������Ϣ��һ�µģ���һ�µ���ÿ����ͥ��Ա�Լ��ĵ绰���룬��ߣ����䲻ͬ
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

