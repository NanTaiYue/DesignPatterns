#include "Anyalst.h"
#include "Client.h"
#include "Programer.h"

int main()
{
	CClient* cl = new CClient();
	CAnyalst* an = new CAnyalst();
	CProgramer* pm = new CProgramer();

	cl->SetAnyalst(an);
	an->SetProgramer(pm);

	cl->PostRequirenmt("����Client�������");
	cout<<cl->GetMyResult().c_str()<<endl;

	delete pm;
	delete an;
	delete cl;
	system("pause");
	return 0;
}