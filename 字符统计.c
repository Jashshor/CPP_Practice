#include <stdio.h>
#include <stdlib.h>
//void swap(char *a,char *b)  //It makes sense if it uses the things that aren't created by it self.(And index is already alive so that it could be delivered to there.)
//{
//	int c;
//	c=*a;
//	*a=*b;
//	*b=c;
//}
int main()
{
	char a,i=0,d[100];
	int b;
	scanf("%c %d",&a,&b);
	char c;
	setbuf(stdin, NULL);
	for(c=getchar();c!='\n';i++)
	{
		d[i]=c;
		c=getchar();
	}//i表示 项数 
	int ii=0,p=0;
	for(;ii<i;ii++)
	{
		if(d[ii]==a) p++;
	}
	if(b==0)
	{
		if(a>=94) a-=32;
		else a+=32;
		for(ii=0;ii<i;ii++)
		{
			if(d[ii]==a) p++;
		}
	}
	printf("%d",p);
	return 0;
}
