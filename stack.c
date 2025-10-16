#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
struct stack *top=NULL;
struct stack *push(struct stack *top,int val)
{
	struct stack *ptr=malloc(sizeof(struct stack));
	ptr->data=val;
	ptr->next=top;
	top=ptr;
	return top;
}
struct stack *pop(struct stack*top)
{
	struct stack*ptr=top;
	if(top==NULL)
	{
		printf("\n stackunderflow");
	}
	else
	{
		top=top->next;
		printf("/n the value being deleted is:",ptr->data);
		free(ptr);
	}
	return top;
}
int peek(struct stack*top)
{
	return (top==NULL)?-1:top->data;
}
struct stack *display(struct stack *top)
{
	struct stack *ptr=top;
	if(top==NULL)
	{
		printf("\nstack is empty");
	}
	else
	{
		while(ptr!=NULL)
		{
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		}
	}
	return top;
}
int main()
{
	int val,option;
	do
	{
		printf("!!!MAIN MENU!!!");
		printf("\n 1.push");
		printf("\n 2.pop");
		printf("\n 3.peek");
		printf("\n 4.display");
		printf("\n 5.exit");
		printf("\n enter your option");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				printf("\n enter the number to be pushed on stack");
				scanf("%d",&val);
				top=push(top,val);
				break;
			case 2:
				top=pop(top);
				break;
			case 3:
				val=peek(top);
				if(val!=-1)
				{
					printf("\n the value at the top of the stack is:%d",val);
				}
				else
				printf("\n stack is empty");
				break;
			case 4:
				top=display(top);
				break;
		}
    }while(option!=5);
return 0;
}


