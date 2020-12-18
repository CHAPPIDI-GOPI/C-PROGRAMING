#include<stdio.h>
int main()
{
	int num1,num2,even,odd,index;
	printf("enter the start and end :");
	scanf("%d%d",&num1,&num2);
	printf("Even numbers between %d and %d are\n",num1,num2);
	for(index=num1;index<=num2;index++)
	{
		if(index%2==0)
			printf("%d ",index);

	}
	printf("\nodd numbers between %d and %d are\n",num1,num2);
	for(index=num1;index<=num2;index++)
	{
		if(index%2==1)
			printf("%d ",index);


	}
	printf("\n");
	return 0;
}
