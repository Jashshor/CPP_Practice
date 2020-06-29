#include <stdio.h>
int main()  //ºÚµ•≈≈–Ú 
{
	int a[5];
for (int i=0;i<5;i++)
scanf("%d",&a[i]);
	int j=1,k=1;
	for (int c=0;c<4;c++)
	{
	while (k<5)
	{
	if(	a[c]<a[k]) {
		int y;
		y=a[c];
		a[c]=a[k];
		a[k]=y;
	}
		k++;
	}
    }
    for (int i=0;i<5;i++)
printf("%d",a[i]);
	return 0;
}
