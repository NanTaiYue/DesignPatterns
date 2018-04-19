#include "DepDepartment.h"
#include "Meeting.h"
#include "Training.h"

/*
�Ž�ģʽ���������Ʒ��ʹ�ö�����з��룬��ʹ�ö���ĳ�������������Ʒ�ĳ���
������ʹ�õķ������嵽����ȥʵ�֣�����Ʒʵ�ʵ�����Ҳ����������ȥʵ��
ͨ���������Ʒ�ӿڶ��������Ž�
����󹤳����������𣺳��󹤳�������һϵ�е���Ʒ�����ӿڣ����Ž�ģʽ�ǹ����������Ʒ

*/

int main()
{
	IDepartment* pdep = new CDepDepartment("�з�����");
	ITask* task = new CTraining();
	pdep->setTask(task);

	pdep->doTask("�з����ŵ���ѵ����");

	delete task;
	task = new CMeeting();
	pdep->setTask(task);
	pdep->doTask("�з����ŵĿ���");

	delete task;
	delete pdep;

	system("pause");
	return 0;
}