#include<stdio.h>
int main()
{
	int  num1,num2,perfect,index1,index2;
	printf("Enter the Start and End values :");
	scanf("%d%d",&num1,&num2);
	printf("Perfect numbers between %d and %d are\n",num1,num2);
	for(index1=num1;index1<=num2;index1++)
	{
		perfect=0;
		for(index2=1;index2<index1;index2++)
		{
			if(index1%index2==0)
				perfect=perfect+index2;
		}
		if(index1==perfect)
			printf("%d ",index1);
	}
	printf("\n");
	return 0;
}
