#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int roll;
	char name[20];
	struct Student *link;
};
struct Student * Add_first(struct Student *ptr)
{
	struct Student *newnode=NULL;
	newnode=malloc(sizeof(struct Student));
	if(newnode==NULL)
	{
		printf("node not created\n");

	}
	else
	{
		printf("enter the roll\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		newnode->link=NULL;
		newnode->link=ptr;
		ptr=newnode; 
	}
	return ptr;
}
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
struct Student * Reverse(struct Student *ptr)
{
	struct Student *prev=NULL,*cur=NULL,*next=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else if(ptr->link==NULL)
	{
		printf("List is having only one node in the list\n");
	}
	else
	{
		next=ptr;// pointing to first node
		while(next)
		{
			prev=cur;
			cur=next;
			next=next->link;
			cur->link=prev; // linking with previous node;
		}
		ptr=cur;
	}
	return ptr;
}
int main()
{
	struct Student *head=NULL;
	int choice;
	while(1)
	{
		printf("1. Add_first 2.Display 3.reverse 4.exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=Add_first(head);
				break;
			case 2: Display(head);
				break;
			case 3:head=Reverse(head);
			       break;
			case 4: exit(0);
		}
	}
}
