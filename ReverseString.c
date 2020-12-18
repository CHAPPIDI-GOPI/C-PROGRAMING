#include<stdio.h>
#include<string.h>
int main(int arg, char *args[])
{
	int len;
	printf("%d\n",arg);
	for(int i =0;i<arg;i++)
	printf("%s\n",args[i]);
	for(int k=1;k<arg;k++)
	{
	len=strlen(args[k]);
	for(int j=len;j>=0;j--)
	{
	printf("%c",args[k][j]);
	}
	printf("\n");
	}
	return 0;
}
