#include <stdio.h>
int main()
{
    int k;
	scanf("%d",&k);// �������鳤�� 
    int a[k];
    for (int i=0;i<k;i++)
    scanf("%d",&a[i]);
	int i=1;
    for (;i<k;i++)//�Ƚϴ��� 1��ʼ 
    {
	    for (int l=0;l<=k-i-1;l++)
	    {if (a[k-i]<a[l])
		     {
			 int y;
		     y=a[l];
			 a[l]=a[k-i];
			 a[k-i]=y;
			  } 
		}
	}
	for (int l=0;l<=k-1;l++)
	printf("%d  ",a[l]);
	return 0;
}
