#include "IShapeMaker.h"
#include "MonsterMaker.h"
#include "Monster.h"

/*
������ģʽ��Ҫ���ڽ�����ı�ʾ�빹�����з���
���Կ�������Ϸ����ƽ���ܶ��Monster����ʱ������Monster��������ж�����ʽ��
��˿ɿ��ǳ������Щ���﹫�еĲ�����Ƴ�һ�������࣬��������Monster��ʼ�����ݣ�
��������ͬ���͵�Monster�ӳٵ���������Ĵ�������ȥʵ�֣��ɴ˻�Ӧ����Monster������
�ٳ����һ��Shape����
�������죬�������
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