#include<iostream>
#include<cstring>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

	int main()
{
    int i=0;
    char str[100],chr;
    while(chr=getchar()!='\n')
    {
    	str[i]=chr;
		i++;	
	}
    cout<<i;
	return 0;

}

