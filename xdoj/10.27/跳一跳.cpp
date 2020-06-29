#include<stdio.h>
int main()
{
	int a[1001],i=0,s=0,all=0;
	a[0]=1;
	while (a[i]!=0)
	{
    i++; 
    scanf("%d",&a[i]);
    if (a[i]==2)
    {
    s+=2;
    all+=s;
    }else if (a[i]==1)
    {
    	s=1;
    	all+=s;
    	s=0;
    }else if (a[i]==0)
    {    
	printf("%d",all);
    return 0;
    }

}}
