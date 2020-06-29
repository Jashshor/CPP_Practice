#include<iostream>
using namespace std;
int main()
{
	int a=1;
	int *j=&a;
	int *k=j;
	cout<<"指针变量值"<<*k<<endl;
	cout<<"指针地址"<<k;
	return 0;
	
}
