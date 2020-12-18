#include<stdio.h>
int main()
{
	int num;
	printf("enter the value\n");
	scanf("%d",&num);
	//(num%2==0)?printf("Even\n"):printf("Odd\n");
	/*if(num%2==0)
	  {
	  printf("\n even\n");
	  }
	  else
	  {
	  printf("\n odd\n");
	  }*/
	/*if(num&1==1)
	{
		printf("\n odd\n");
	}
	else

	{
		printf(" even\n");
	}*/

	

	(num&1==1)?printf("odd\n"):printf("even\n");
	

	

}

	
