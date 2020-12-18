#include<stdio.h>
int main()
{
	int n,r,sum=0,n1;
	printf("enter given number\n");
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(sum==n1)
	{
		printf("armstrong\n");
	}

		else
		{
			printf("not armstrong\n");
	}
}
