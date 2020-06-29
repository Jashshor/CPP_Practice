#include <stdio.h>
int main()
{
    int a,b;
scanf("%d%d",&a,&b);
printf("%d + %d = %d\n",a,b,a+b);
printf("%d - %d = %d\n",a,b,a+b);
printf("%d * %d = %d\n",a,b,a*b);
if (a%b==0)
printf("%d / %d = %d\n",a,b,a/b);
else 
{
    float aa=a,bb=b;
    printf("%d / %d = %.2f",a,b,aa/bb);
}return 0;


}
