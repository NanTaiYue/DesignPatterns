#include "Factory.h"

/*
工厂方法：一个工厂，可以通过该工厂创建不同类型的对象，工厂创建函数返回对象是一系列不同对象的共同基类，
		  通过派生类不同的实现去体现不同的特性
*/

int main()
{
	/* 工厂的创建分为2中方式，1.在这里new一个对象；2.用单例模式来获取工厂对象  */
	CFactory* pFactory = new CFactory();
	if (pFactory)
	{
		struct HeroAttr ha1 = {"德玛西亚",HEROTYPE::FIGHTER};  // 构造方式须与声明方式相同
		IHero* p1 = pFactory->CreateHero(ha1);
		if (p1)
		{
			p1->Attack();
			p1->Defense();
			p1->Walk();
			p1->Flash();
		}
		struct HeroAttr ha2 = {"薇恩",HEROTYPE::SHOOTER};
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