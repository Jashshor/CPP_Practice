#include <stdio.h>
int main()
{
    int k;
	scanf("%d",&k); //输入数组长度 
    int a[k];
    for (int i=0;i<k;i++)
    scanf("%d",&a[i]);   //键入数组 
	int i=1;
    for (;i<k;i++)
    {
	    for (int l=0;l<=k-i-1;l++)
	    {if (a[l]>a[l+1])
		     {
			 int y;
		     y=a[l];
			 a[l]=a[l+1];
			 a[l+1]=y; 
			  } 
		}
	}
	for (int l=0;l<=k-1;l++)
	printf("%d  ",a[l]);
	return 0;
}
