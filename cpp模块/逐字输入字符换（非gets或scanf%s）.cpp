void ges(char* a)
{
	int p=0;
	for(char i=getchar();i!='\n';p++)
	{
		a[p]=i;
		i=getchar();
	}
	a[p]='\0';//�ǵü��Ͻ�����ʶ 
} //����ges(char��������) 

