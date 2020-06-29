#include <stdio.h>
//#include <stdlib.h>
//#include<math.h>
void swap(int *a,int *b)  //It makes sense if it uses the things that aren't created by it self.(And index is already alive so that it could be delivered to there.)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main()
{
//	char x,y,op;
	int n;
	int a[1000];
	scanf("%d",&n);
	int i=0;
	for (;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	for (i=0;i<n-1;i++)
	{
		int k;
		for(k=i;k<n;k++)
		{
			if(a[i]<a[k]) swap(&a[i],&a[k]);
		}
	}
	int re=-1;
	if(n%2==0&&a[n/2]==a[n/2-1]) re=a[n/2];
	else if(n%2==1) re==a[(n-1)/2];
	else re==-1;
//	scanf("%c %c %c",&x,&y,&op);
//	if(x=='/'||x=='*'||x=='+'||x=='-'||x=='%')
//	{
//		swap(&x,&op);
//		swap(&x,&y);
//	}
//	else if(y=='/'||y=='*'||y=='+'||y=='-'||y=='%')
//	{
//		swap(&y,&op);
//	}
//	x=atoi(&x);
//	y=atoi(&y);
//	int re;
//	if(op=='/') re=x/y;
//	if(op=='*') re=x*y; 
//	if(op=='+') re=x+y;
//	if(op=='-') re=x-y;
//	if(op=='%') re=x%y;  //I should use the sentence "switch case :"
	printf("%d",re);
	return 0;
}
//&a[0].age,&a[0].name,%d%s
