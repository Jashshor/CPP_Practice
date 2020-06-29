#include<stdio.h>
int main()
{
	int y,d,q[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i=0;
	scanf("%d %d",&y,&d);
	if((y%4==0&&y%100!=0)||y%400==0)
	q[1]=29;
	for (;d>0;i++)
	{
		d-=q[i];
	}
	d=d+q[i-1];  //ÈÕ 
	i-=1;  //ÔÂ·İ 
	if(d==0)
	{
		i-=1;
		d=q[i];
	 } 
	i+=1;
	printf("%d %d",i,d);
	return 0;
}
