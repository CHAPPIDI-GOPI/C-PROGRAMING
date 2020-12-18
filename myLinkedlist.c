#include<stdio.h>
#include<malloc.h>
typedef struct list
{
	int n;
	struct list* next;
}var;
var *start = NULL;
void nodeinsertend();
void nodeinsertbegin();
void noderemoveend();
void noderemovebegin();
void nodessorting();
void displaynodes();
int main()
{
	int choice;
	while(1)
	{
		printf("1) Node insert end\n2)Node insert begin\n3)Node remove end\n4)Node remove begin\n5)Nodes sorting\n6)Display nodes\n");
		printf("Enter the choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				nodeinsertend();
				break;
				
			case 2:
				nodeinsertbegin();
				break;

			case 3:
				noderemoveend();
				break;

			case 4:
				noderemovebegin();
				break;

			case 5:
				nodessorting();
				break;
			case 6:
				displaynodes();
				break;

			default:printf("Enter the correct choice..!\n");
		}
	}

	return 0;
}
void nodeinsertend()
{
	int n1;
	printf("Enter node:");
	scanf("%d",&n1);
	var* newnode=NULL;
	newnode = (var*)malloc(sizeof(var));
	newnode->n=n1;
	newnode->next=NULL;
	if(start==NULL)
	{
		start=newnode;

	}
	else
	{
		var* temp1 = start;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;

		}
		temp1->next = newnode;
	}

}
void nodeinsertbegin()
{
	int n2;
	var* temp2=NULL;
	temp2 = (var*)malloc(sizeof(var));
	printf("Enter the node:");
	scanf("%d",&n2);
	temp2->n=n2;
	temp2->next=NULL;
	if(start==NULL)
	{
		start=temp2;
	}
	else
	{
		temp2->next=start;
		start=temp2;
	}


}
void noderemoveend()
{
	var* temp3 = start;
	var* temp4 = NULL;
	while(temp3->next!=NULL)
	{
		temp4 = temp3;
		temp3 = temp3->next;
	}
	temp4->next=NULL;
	free(temp3);
}
void noderemovebegin()
{
	var* temp5 =start;
	start = temp5->next;
	free(temp5);
}
void nodessorting()
{
	var* temp6 = start;
	var* temp7 = NULL;
	int n3;
	while(temp6!=NULL)
	{
		temp7 = temp6->next;
		while(temp7!=NULL)
		{
		if(temp6->n > temp7->n)
		{
			n3=temp6->n;
			temp6->n=temp7->n;
			temp7->n=n3;
		}
		temp7=temp7->next;
		}
		temp6=temp6->next;
	}
	
}
void displaynodes()
{
	var *temp = start;
	while(temp!=NULL)
	{
		printf("%d ",temp->n);
		temp=temp->next;
          
	}
		printf("\n");

}
