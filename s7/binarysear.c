 7. Slip7_2 : Write a C program which uses Binary search tree library and implements following functions :
Create Binary search Tree                                                                                            [10]
Insert a node in a binary tree                                                                                      [10]
Display a binary tree                                                                                                       [5]



#include<stdio.h>
#include<stdlib.h>
struct node
{
                int data;
                struct node *r;
                struct node *l;
};

#define newnode (struct node*)malloc(sizeof(struct node));
struct node *insert(struct node *,int);
struct node *create()
{
                int n,x,i;
                struct node *root;
                root=NULL;
                printf("\n Enter no of nodes");
                scanf("%d",&n);
                printf("\nEnter tree values");
                for(i=0;i<n;i++)
                {
                                scanf("%d",&x);
                                root=insert(root,x);
                }
                return root;
}
struct node *insert(struct node *rt,int x)
{
                if(rt==NULL)
                {
                                rt=newnode;
                                rt->data=x;
                                rt->l=NULL;
                                rt->r=NULL;
                                return rt;
                }
                else if(x>rt->data)
                {
                                rt->r=insert(rt->r,x);
                                return rt;
                }
                else
                                rt->l=insert(rt->l,x);
                return rt;
}

void inorder(struct node *tmp)
{
  if(tmp!=NULL)
  {
    inorder(tmp->l);
    printf("%d->",tmp->data);
    inorder(tmp->r);
  }
}
void preorder(struct node *tmp)
{
  if(tmp!=NULL)
  {
    printf("%d->",tmp->data);
    preorder(tmp->l);
    preorder(tmp->r);
  }
}
int count(struct node *tmp)
{
                static int i=0;
                if(tmp==NULL)
                                return 0;
                else if(tmp->l==NULL && tmp->r==NULL)
                                return 1;
                i=count(tmp->l)+count(tmp->r);
                                return i;
}

main()
{
                int no,y,cnt;
                struct node *rt;
                rt=create();
                 
                printf("\nInorder\n");
                inorder(rt);
                printf("\npreorder\n");
                preorder(rt);
                 
                cnt=count(rt);
                printf("\n No of child nodes are : %d",cnt);
                 
}

Email This