int wei(int a)
{
	
	int i=0;
	while(a>0)
	{
		i++;
		a/=10;
	}
	return i;
} //����: int wei=wei(a); 
