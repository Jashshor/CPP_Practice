#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int j;
	int i;
	scanf("%d",&n);
	int  a[1001]={1001},c;
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	c=fabs(a[1]-a[2]);
	for (i=0;i<n-1;i++)
	{
	   for (j=i+1;j<n;j++)
	   		if(c>fabs(a[i]-a[j]))
	   		    c=fabs(a[i]-a[j]);
    }
	printf("%d",c);
	return 0;
}
