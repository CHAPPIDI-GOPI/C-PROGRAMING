#include<stdio.h>
int main()
{
/*	int n,i,sum=0;
	    printf("\n enter given  number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			sum=sum+i;
	}
	if(sum==2*n)
	{
		printf("\n given num if perfect\n");
	}else
	{
		printf("\n not perfect");
	}*/
	/*int index,num1,num2,num,perfect=0;

	printf("\n enter two numbersi");
	scanf("%d%d",&num1,&num2);
	for(index=num1;index<=num2;index++)
	{
		perfect=0;
		num=1;
	while(num<index)
	{	
			
		if(num%index == 0)
		{
		perfect=perfect+num;
		num++;
	}
	}
	}
	if(perfect==index)
	{
		printf("given nubr is :%d perfect\n",num);
	}*/

/*int i,n,n1,n2,perfect=0;
printf("enter two values ");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
{
	n=1;
	perfect=0;
	while(n<i)

	{
		if(i%n==0)
		{
			perfect=perfect+i;
			i++;
		}
	}
}if(perfect==n)
{
	printf("%d",n);
}printf("\n");*/
  	int index,num1,num2,num,perfect=0;
	printf("\n enter start and end values\n");
	scanf("%d%d",&num1,&num2);
	for(index=num1;index<=num2;index++)
{

	num=1;
	for(index=num;index<=num1;index++)
	{
		if(num%index==0)
		{
			perfect=perfect+index;
			index++;
		}
	}
}

if(perfect==index)
{
	printf("%d",perfect);
}
}
