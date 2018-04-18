#include "Factory.h"

/*
����������һ������������ͨ���ù���������ͬ���͵Ķ��󣬹��������������ض�����һϵ�в�ͬ����Ĺ�ͬ���࣬
		  ͨ�������಻ͬ��ʵ��ȥ���ֲ�ͬ������
*/

int main()
{
	/* �����Ĵ�����Ϊ2�з�ʽ��1.������newһ������2.�õ���ģʽ����ȡ��������  */
	CFactory* pFactory = new CFactory();
	if (pFactory)
	{
		struct HeroAttr ha1 = {"��������",HEROTYPE::FIGHTER};  // ���췽ʽ����������ʽ��ͬ
		IHero* p1 = pFactory->CreateHero(ha1);
		if (p1)
		{
			p1->Attack();
			p1->Defense();
			p1->Walk();
			p1->Flash();
		}
		struct HeroAttr ha2 = {"ޱ��",HEROTYPE::SHOOTER};
		IHero* p2 = pFactory->CreateHero(ha2);
		if (p2)
		{
			p2->Attack();
			p2->Defense();
			p2->Walk();
			p2->Flash();
		}
		delete p1;
		delete p2;
	}
	delete pFactory;
	system("pause");
	return 0;
}