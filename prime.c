#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter the value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			count=count++;
	}if(count==2)
	{
		printf("prime\n");
	}
	else
	{
		printf("\n not prime\n");
	}
}
