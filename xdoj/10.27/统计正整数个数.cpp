#include<stdio.h>
int jiaohuan(int *a,int *b){
	int t ;
	t=*a;
	*b=*a;
    *a=t;
}
int main()
{int l=0,b[10000], a[10000],n,m,m2=-1,h[10000],p=0,k;    //数据集 
while (l<=10000)//b初始化 
{b[l]=-1;
l++;
} 
scanf("%d",&n);
n-=1;
for (int i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}//输入完毕 
 for (int i=0;i<=n-1;i++)//扫描第一部分 
{k=i+1;
 for (;k<n;k++)//开始 从第一部分以后进行第二部分扫描 
{
 if(a[i]>a[k])
 {jiaohuan(&a[i],&a[k]);//以后部分最小值到达较前方 
 }
}}
//开始去除重复值
  for (int i=0;i<=n-1;i++)//再次扫描第一部分 
{k=i+1;//更新i对应的k 
if (a[i]>0){
 for (;k<n;k++)//再次开始 从第一部分以后进行第二部分扫描 
{if (a[i]==a[k])
a[k]=m2;//区分出了 
}m2--;//更新标记值 
}}
//去除并标记完成
//统计标记值
for(int y=-1;y>=m2;y--)//标记值扫描一遍 
{for(int t=0;t<=n;t++)  //再次扫描现在的第二部分（原数组部分 
{if(a[t]==y)
{h[-y-1]++;  //从h[0]开始对应去除重复后的a[0] 
}} 
} 
//按格式输出
  for (int i=0;i<=n;i++)//再次扫描第一部分  
{if (a[i]>0)
{
		printf("%d:%d\n",a[i],h[p]+1);
		p++;
}
}
}
