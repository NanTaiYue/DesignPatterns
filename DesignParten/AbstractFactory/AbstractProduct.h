#pragma once

#include <iostream>
#include <cstring>

using namespace std;
/*
����Ĳ�Ʒ
*/
class CAbstractProduct
{
private:
	string m_productname;  // ��Ʒ����
	string m_maker; // ������
public:
	CAbstractProduct(void);
	virtual ~CAbstractProduct(void);
	string getProductName() const;
	void setProductName(string name);
	string getMaker() const;
	void setMaker(string maker);
	void printSelf();
};

