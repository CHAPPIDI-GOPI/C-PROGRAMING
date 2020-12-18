#include<stdio.h>
int main()
{
	int num,num1,rem,sum=0;
	printf("\n enter number\n");
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	if(num1==sum)
	{
		printf("\n %d ispallendrom\n",num1);
	}else
	{
		printf("\n%d not parrendrom\n",num1);
	}
}

