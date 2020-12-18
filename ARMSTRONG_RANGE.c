#include<stdio.h>
int main()
{
	int num1,num2,num,sum,rem;
	printf("enter start and end values\n");
	scanf("%d%d",&num1,&num2);
	printf("armstrong numbers between %d to %d are:\n",num1,num2);
	while(num1<=num2)
	{
		num=num1;
		sum=0;
		while(num!=0)
		{
			rem=num%10;
			sum=sum+rem*rem*rem;
			num=num/10;
		}
		if(sum==num1)
		{
			printf("%d ",sum);
		}
		num1++;
	}
	printf("\n");
	return 0;

}
