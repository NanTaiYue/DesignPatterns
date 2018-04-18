#pragma once

#include <iostream>
#include <cstring>

using namespace std;

/*
�����࣬ȫ��ֻ��Ψһ�Ķ���
*/

class CSingalObject
{
private:
	static CSingalObject* m_pIns;  // self����
	string _name;
protected:
	CSingalObject(void);
	CSingalObject(const CSingalObject& obj); // ȥ�����ƹ��캯��
	CSingalObject& operator = (const CSingalObject&); // ȥ����ֵ����
public:
	static CSingalObject* GetInstance();
	virtual ~CSingalObject(void);

	string GetName() const;  // ����Ա������ȷ���ú��������޸����������
	void SetName(string);
};

