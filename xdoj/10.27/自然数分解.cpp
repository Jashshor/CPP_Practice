#include<stdio.h>
#include<math.h>
int main()
{
	int y,d,min,q[10000];
	scanf("%d",&y);
	if(y%2==0)
	{
	min=y*y-1-(y/2-1)*2;
	}
else min=y*y-(y-1);
d=y-1;
for (int i=0;i<=y-1;i++)
{
	printf("%d ",min+2*i);
}
	return 0;
}
