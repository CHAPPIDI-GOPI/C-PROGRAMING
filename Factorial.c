#include<stdio.h>
int main()
{
	int fact =1 , num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is :%d\n",num,fact);
	return 0;
}
