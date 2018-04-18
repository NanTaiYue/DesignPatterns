#include "IShapeMaker.h"
#include "MonsterMaker.h"
#include "Monster.h"

/*
建造者模式主要用于将对象的表示与构建进行分离
可以考虑在游戏中设计建造很多的Monster对象时，由于Monster对象可能有多种形式，
因此可考虑抽象出这些怪物公有的部分设计成一个抽象类，该来定义Monster初始的数据，
将创建不同类型的Monster延迟到各个具体的创建类中去实现，由此还应该在Monster基础上
再抽象出一个Shape类来
成事在天，设计在人
*/

int main()
{
	IShapeMaker* maker = new CMonsterMaker();
	if (maker)
	{
		CMonster* pMonster = new CMonster(maker);
		//pMonster->setMaker(maker);

		pMonster->make();
		pMonster->showself();
		delete pMonster;
	}
	delete maker;

	system("pause");
	return 0;
}