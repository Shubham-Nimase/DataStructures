


10. Slip10_2 : Write a C program which uses Binary search tree library and implements following functions
a) Create Binary search Tree                                                                       [10]
b) Insert a node in a binary tree                                                                [5]
c) Search a node in binary tree                                                   [5]
d) Display a binary tree                                                                  [5]



#include<stdio.h>
#include<stdlib.h>
struct node
{
                int data;
                struct node *r;
                struct node *l;
};
#define newnode (struct node*)malloc(sizeof(struct node))

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

void postorder(struct node *tmp)
{
  if(tmp!=NULL)
  {
    postorder(tmp->l);
    postorder(tmp->r);
    printf("%d->",tmp->data);
   
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

struct node *search(struct node *tmp,int x)
{
if(tmp==NULL)
return (NULL);
if(tmp->data==x)
return (tmp);
if(x>tmp->data)
return(search((tmp->r),x));
return(search((tmp->l),x));
}

main()
{
                int no,y;
                struct node *rt;
                rt=create();
                 
                printf("\nInorder\n");
                inorder(rt);
                printf("\npostorder\n");
                postorder(rt);
                printf("\npreorder\n");
                preorder(rt);
                printf("\nEnter element to insert : ");
                scanf("%d",&no);
                rt=insert(rt,no);
                inorder(rt);

                printf("\nEnter the node to be searched \n");
                scanf("%d",&y);
                rt=search(rt,y);

                if(rt!=NULL)
                printf("\nNode is found in tree \n");
                else
                printf("\nNode is not found in tree \n");
                 
}