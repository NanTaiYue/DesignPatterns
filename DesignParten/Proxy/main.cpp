#include "XiaomiProxy.h"
#include "XiaomiCompany.h"

/*
����ģʽ���ڿͻ�������������֮����һ���м�����ˣ������˸�����ͻ�������Ȼ�����������ṩ������󷵻ش�����
*/

int main()
{
	ICompany* pXiaoMi = new CXiaomiCompany();
	CXiaomiProxy* pProxy = new CXiaomiProxy();
	pProxy->SetProxyCompany(pXiaoMi);

	pProxy->request("��Ҫ��С���ֻ�");
	string ss = pProxy->response();
	cout<<ss.c_str()<<endl;

	delete pXiaoMi;
	delete pProxy;

	system("pause");
	return 0;
}