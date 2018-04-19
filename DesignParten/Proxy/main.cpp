#include "XiaomiProxy.h"
#include "XiaomiCompany.h"

/*
代理模式：在客户与具体的生产商之间有一个中间代理人，代理人负责处理客户的需求，然后向生产商提供需求，最后返回处理结果
*/

int main()
{
	ICompany* pXiaoMi = new CXiaomiCompany();
	CXiaomiProxy* pProxy = new CXiaomiProxy();
	pProxy->SetProxyCompany(pXiaoMi);

	pProxy->request("我要买小米手机");
	string ss = pProxy->response();
	cout<<ss.c_str()<<endl;

	delete pXiaoMi;
	delete pProxy;

	system("pause");
	return 0;
}