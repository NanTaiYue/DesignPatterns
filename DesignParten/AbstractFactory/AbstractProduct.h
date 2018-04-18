#pragma once

#include <iostream>
#include <cstring>

using namespace std;
/*
抽象的产品
*/
class CAbstractProduct
{
private:
	string m_productname;  // 产品名字
	string m_maker; // 生产商
public:
	CAbstractProduct(void);
	virtual ~CAbstractProduct(void);
	string getProductName() const;
	void setProductName(string name);
	string getMaker() const;
	void setMaker(string maker);
	void printSelf();
};

