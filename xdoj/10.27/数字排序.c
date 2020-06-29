#include <stdio.h>
void no(int j)
{
	printf("%d no",j);
}
void yes(int j)
{
	printf("%d yes",j);
}
int main()
{
	int i,j;
	int n;

	scanf("%d %d %d",&n,&i,&j);
	j%=10;
	if(i>=200&&i<400)
	{
		switch(n)
		{
			case 1:
				{
					if(j==1||j==6) no(j);
					else yes(j);
					break;
				}
			case 2:
				{
					if(j==2||j==7) no(j);
					else yes(j);
					break;
				}
			case 3:
				{
					if(j==3||j==8) no(j);
					else yes(j);
					break;
				}
			case 4:
				{
					if(j==4||j==9) no(j);
					else yes(j);
					break;
				}
			case 5:
				{
					if(j==5||j==0) no(j);
					else yes(j);
					break;
				}
			case 6:
				{
				    yes(j);
					break;
				}
			case 7:
				{
				    yes(j);
					break;
				}																								
		}
	}
	else if(i>=400)
	{
		switch(n)
		{
			case 1:
	        case 3:
			case 5:
				{
					if(j==5||j==1||j==3||j==7||j==9) no(j);
					else yes(j);
					break;
				}
	        case 2:
			case 4:
				{
					if(j==2||j==0||j==4||j==6||j==8) no(j);
					else yes(j);
					break;	
				}
			case 6:
				{
				    yes(j);
					break;
				}
			case 7:
				{
				    yes(j);
					break;
				}																								
		}
	}
	else if (i>=0&&i<200) yes(j);
	return 0;
}
