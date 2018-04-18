#include "IShapeMaker.h"


IShapeMaker::IShapeMaker(void)
{
}


IShapeMaker::~IShapeMaker(void)
{
}

void IShapeMaker::Show()
{
	for (auto iter = m_proc.cbegin(); iter != m_proc.cend(); ++iter)
	{
		cout<<(*iter).c_str()<<" ";
	}
	cout<<endl;
}