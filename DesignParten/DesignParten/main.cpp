#include "SingalObject.h"

int main()
{
	CSingalObject::GetInstance()->SetName("zhouhengbo");

	cout<<CSingalObject::GetInstance()->GetName().c_str()<<endl;

	system("pause");
	return 0;
}