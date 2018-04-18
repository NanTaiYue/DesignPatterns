#include "SingalObject.h"

// 对类静态对象做声明
CSingalObject* CSingalObject::m_pIns = nullptr;

CSingalObject::CSingalObject(void)
{
}


CSingalObject::~CSingalObject(void)
{
	if(m_pIns)
		delete m_pIns;
	m_pIns = nullptr;
}

CSingalObject* CSingalObject::GetInstance()
{
	if (!m_pIns)
		m_pIns = new CSingalObject();
	return m_pIns;
}
string CSingalObject::GetName() const
{
	return this->_name;
}

void CSingalObject::SetName(string name)
{
	this->_name = name;
}