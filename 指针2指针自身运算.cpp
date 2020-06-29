#include<iostream>
using namespace std;
int main()
{
	int a=1,f=5,e=10,*c=&a,*d=&e;  //与变量名称无关，与指针定义时间有关，f白定义了 
	cout<<"指针变量值"<<*c<<"指针变量jian一"<<*c-1<<"jian一内存地址"<<*(c-1)<<endl;   //此为栈非堆，减一是移动指针4字节（具体可能是其他字节数） 
	int k[3][3]={1,2,3,4,5,6,7,8,9};
	int *l=&k[0][0],i=1;   
	while (i<=9)    //1.用指针加法简化输出二维数组 ,省得去嵌套循环 
	{
		cout<<*(l+i-1)<<"     ";
		if (i%3==0)
		cout<<'\n';
		i++;
	}
	while (i<=9)    //2.用指针加法简化输出二维数组 ,省得去嵌套循环 
	{
		cout<<*l<<"     ";
		*(l++);
		if (i%3==0)
		cout<<'\n';
		i++;
	}
	return 0;
}
