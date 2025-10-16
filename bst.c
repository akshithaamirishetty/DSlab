#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *insert(struct node *tree,int val)
{
	struct node *ptr;
	if(tree==NULL)
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		tree->data=val;
		tree->left=tree->right=NULL;
	}
	else
	{
		if(val<tree->data)
		   insert(tree->left,val);
		else
		   insert(tree->right,val);
	}
	return tree;
}

void inorder(struct node *tree)
{
	if(tree!=NULL)
	{
		inorder(tree->left);
		printf("%d\t",tree->data);
		inorder(tree->right);
	}
}
void preorder(struct node *tree)
{
	if(tree!=NULL)
	{
		printf("%d\t",tree->data);
		preorder(tree->left);
		preorder(tree->right);
	}
}
void postorder(struct node *tree)
{
	if(tree!=NULL)
	{
		postorder(tree->left);
		postorder(tree->right);
		printf("%d\t",tree->data);
	}
}
void create_tree(struct node *tree)
{
	tree=NULL;
}
int main()
{
	int option,val;
	struct node *tree;
	create_tree(tree);
	printf("\n\n enter your option:");
	scanf("%d",&option);
	while(1)
	{
		printf("MAIN MENU");
		printf("\n1:insert");
		printf("\n2:inorder");
		printf("\n3:preorder");
		printf("\n4:postorder");
		switch(option)
		{
			case 1:
				printf("enter the value of the node:");
				scanf("%d",&val);
				tree=insert(tree,val);
				break;
			case 2:
				printf("\n INORDER:\n");
				inorder(tree);
				break;
			case 3:
				printf("\n PREORDER:\n");
				preorder(tree);
				break;
			case 4:
				printf("\n POSTORDER\n");
				postorder(tree);
				break;
				
		}
	}
	getch();
	return 0;
}
