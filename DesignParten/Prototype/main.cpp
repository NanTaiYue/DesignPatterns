#include "FamilyMemberA.h"

/*
原型模式，一个抽象的家庭成员信息对象，包含一些相同的基础信息和一个成员对象的基础属性，再由一个具体的成员类来定制不同的实现
*/

int main()
{
	CFamilyMemberA* pInfo = new CFamilyMemberA();
	if (pInfo)
	{
		IAbstractFamilyInfo* p1 = pInfo->clone();
		p1->SetName("zhb");
		p1->SetAge(26);
		p1->SetHeight(1.72f);
		p1->SetTelphone("111");
		p1->PrintSelf();

		IAbstractFamilyInfo* p2 = pInfo->clone();
		p2->SetName("zz");
		p2->SetAge(64);
		p2->SetHeight(1.60f);
		p2->SetTelphone("222");
		p2->PrintSelf();

		delete p1;
		delete p2;
		delete pInfo;
	}

	system("pause");
	return 0;
}