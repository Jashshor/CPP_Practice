#include<iostream>
#include<cstring>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    int da=0,xiao=0,kong=0,shu=0,qi=0;
    char str[100];
    int i=0,ii[2];
    int chr;
    for((chr=getchar())!=EOF;chr!='\n';i++)
    {
		str[(int)i]=(char)chr;
		chr=getchar();
		cout<<(int)i<<endl;
	}
	ii[0]=i;
    for(i=0;i<ii[0];i++)
        {
            if(str[i]==' ') kong++;
            else if((str[i]>='a'&&str[i]<='z')) xiao++;
            else if((str[i]>='A'&&str[i]<='Z')) da++;
            else if((str[i]>='0'&&str[i]<='9')) shu++;
            else qi++;
        }
    cout<<da<<" "<<xiao<<" "<<kong<<" "<<shu<<" "<<qi;
	return 0;
}

