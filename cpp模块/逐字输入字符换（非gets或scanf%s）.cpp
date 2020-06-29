void ges(char* a)
{
	int p=0;
	for(char i=getchar();i!='\n';p++)
	{
		a[p]=i;
		i=getchar();
	}
	a[p]='\0';//记得加上结束标识 
} //调用ges(char型数组名) 

