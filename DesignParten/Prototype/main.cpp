#include "FamilyMemberA.h"

/*
ԭ��ģʽ��һ������ļ�ͥ��Ա��Ϣ���󣬰���һЩ��ͬ�Ļ�����Ϣ��һ����Ա����Ļ������ԣ�����һ������ĳ�Ա�������Ʋ�ͬ��ʵ��
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