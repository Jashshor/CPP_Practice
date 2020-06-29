#include <stdio.h>
#include <math.h>
int length(int n)// 输出n的位数 
{
	int i=1,k=0;
	while(n/i!=0)
	{
		i*=10;
		k++;
	}
	return k;     
}
int wei(int n,int i)//输出n的第i位 
{
	int a,b;
	a=n%((int)pow(10,i));
	a/=(int)pow(a,i-1);
	return a;
}
int ci(int n,int k1,int k2)//k1，k2出现次数 
{
	int i;
	int k=length(n),ci;
	for (i=1;i<=k;i++)
	{
		if(wei(n,i)==k1||wei(n,i)==k2) ci++;
	}
	return ci;
}


int main()
{
	int n,k1,k2,a[100],i;
	scanf("%d %d %d",&n,&k1,&k2);
int max=0;
a[max]=123456789;
	printf("%d %d %d",a[max],ci(a[max],k1,k2),length(a[max]));
	return 0;
}
