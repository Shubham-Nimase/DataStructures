 17. Slip17_2 : Write a C program which uses Binary search tree library and implements following functions
a) Create Binary Search Tree                                                                                       [10]
b) Count a node in binary tree                                                                                   [5]
c) Search a node in binary tree                                                                                   [5]
d) Display a binary tree                                                                                                  [5]

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

void inorder(struct node *tmp)
{
  if(tmp!=NULL)
  {
    inorder(tmp->l);
    printf("%d->",tmp->data);
    inorder(tmp->r);
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
                int no,y;
                struct node *rt;
                rt=create();
                 
                printf("\nInorder\n");
                inorder(rt);

                printf("\nEnter the node to be searched \n");
                scanf("%d",&y);
                rt=search(rt,y);

                if(rt!=NULL)
                printf("\nNode is found in tree \n");
                else
                printf("\nNode is not found in tree \n");
               
                cnt=count(rt);
                printf("\n No of child nodes are : %d",cnt);
                 
}
