#include<stdio.h>
int main()
{
	int i,j,num1,num2,count;
	printf("enter two numbers:");
	scanf("%d%d",&num1,&num2);
	for(i=num1;i<=num2;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==2)
			printf("%d ",i);
	}
	printf("\n");
}

