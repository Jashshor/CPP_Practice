#include <stdio.h>
#include<stdlib.h>
int main(){
int n,i,j,m;
double x;
int a[100];
scanf("%d\n",&n);
for(i=0;i<n;i++)
{scanf("%d" ,&(a[i]));
}
int sum=0;
for(int i=0;i<n;i++)
sum+=a[i];
float result;
result=(float)sum/n;
float re=result;
printf("%.3f ",re);
return 0;
system("pause");
}

