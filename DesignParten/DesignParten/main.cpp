#include "SingalObject.h"

int main()
{
	CSingalObject::GetInstance()->SetName("zhb");

	cout<<CSingalObject::GetInstance()->GetName().c_str()<<endl;

	system("pause");
	return 0;
}