#include<stdio.h>
#include<string.h> 
int main()
{ 
	char a[1000],b[1000],c[1000];
	gets(a);
	gets(b);
	gets(c);
	printf("%d",strlen(a)+strlen(b)+strlen(c));
}
