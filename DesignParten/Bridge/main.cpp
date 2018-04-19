#include "DepDepartment.h"
#include "Meeting.h"
#include "Training.h"

/*
桥接模式将具体的物品和使用对象进行分离，在使用对象的抽象类中依赖物品的抽象
将具体使用的方法具体到子类去实现，而物品实际的属性也是在子类中去实现
通过抽象的物品接口对象将两者桥接
与抽象工厂方法的区别：抽象工厂是声明一系列的物品产生接口，而桥接模式是关联抽象的物品

*/

int main()
{
	IDepartment* pdep = new CDepDepartment("研发部门");
	ITask* task = new CTraining();
	pdep->setTask(task);

	pdep->doTask("研发部门的培训工作");

	delete task;
	task = new CMeeting();
	pdep->setTask(task);
	pdep->doTask("研发部门的开会");

	delete task;
	delete pdep;

	system("pause");
	return 0;
}