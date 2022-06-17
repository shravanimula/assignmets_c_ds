#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int roll;
	char name[20];
	struct Student *link;
};
//struct Student 
void Display(struct Student *ptr)
{
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d %s\n",ptr->roll,ptr->name);
			ptr=ptr->link;
		}
	}
}
struct Student * Add_last(struct Student *ptr,int len)
{
	struct Student *newnode=NULL,*temp=NULL;
	int i;
//	printf("enter the length of list\n");
//	scanf("%d",&len);
	for(i=1;i<=len;i++)
	{
	newnode=malloc(sizeof(struct Student));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		printf("enter the roll\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		newnode->link=NULL ;
		if(ptr==NULL) 
		{
			ptr=newnode;
		}
		else
		{
			temp=ptr;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}
	}
	}
	return ptr;
}
int main()
{
	struct Student *head=NULL;
	int choice,len,i;
	while(1)
	{
		printf("1. Add_last 2.Display 3.exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the length of list\n");
				scanf("%d",&len);
				head=Add_last(head,len);
				break;
			case 2: Display(head);
				break;
			case 3:exit(0);
		}
	}
}
