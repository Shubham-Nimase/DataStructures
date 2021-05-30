 13. Slip13_2 : Implement a list library (singlylist.h) for a singly linked list with the insert, delete, search, display operations. Write a menu driven program to call the operations.
Insert, Delete carries 6 marks each                                                                          [12]
Display Function                                                                                                               [4]
Search Function                                                                                                                [5]
Creation of Singly link list                                                                                               [4]


#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node* create(int n)
{
   int i=0;
   struct node *s,*f;
   f=(struct node *)malloc(sizeof(struct node));
   printf("\n Enter node 1: ");
   scanf("%d",&f->data);
   f->next=NULL;
   s=f;

   for(i=2;i<=n;i++)
   {
                s->next=(struct node *)malloc(sizeof(struct node));
                s=s->next;
                printf("\n Enter node %d: ",i);
                scanf("%d",&s->data);
                s->next=NULL;
  }
   return f;
}

void display(struct node* f)
{
     struct node *t;
                 
   for(t=f;t!=NULL;t=t->next)
   {
                printf("\t %d ->",t->data);
   }
   printf("NULL");
}
struct node * insert(struct node * f,int pos)
{
                struct node *t,*s;int i,cnt=0;
                for(t=f;t!=NULL;t=t->next)
                 {             cnt++;
                 }
                if(pos>cnt)
                {
                                printf("\n Invalid position ");
                }
                else
                {              s=(struct node *)malloc(sizeof(struct node));
                                printf("\n Enter data : ");
                                scanf("%d",&s->data);
                                if(pos==1)
                                {              s->next=f;
                                                f=s;
                                }
                                else if(pos==cnt)
                                {              for(t=f;t->next!=NULL;t=t->next);
                                                t->next=s;
                                                t=t->next;
                                                t->next=NULL;
                                }
                                else
                                {              for(i=1,t=f;i<pos-1;i++)
                                                t=t->next;
                                                s->next=t->next;
                                                t->next=s;
                                }
                }              //end of else
                return f;
}

struct node* delete(struct node *f,int pos)
{
                struct node *t,*s;int i,cnt=0;
                for(t=f;t!=NULL;t=t->next)
                 {             cnt++;
                 }
                if(pos>cnt)
                {              printf("\n Invalid position ");
                }
                else
                {              if(pos==1)
                                {              s=f;
                                                f=f->next;
                                                free(s);
                                }
                                else if(pos==cnt)
                                {              for(i=1,t=f;i<cnt-1;i++)
                                                                t=t->next;
                                                s=t->next;
                                                t->next=NULL;
                                                free(s);
                                }
                                else
                                {
                                                for(i=1,t=f;i<pos-1;i++)
                                                                t=t->next;
                                                s=t->next;
                                                t->next=s->next;
                                                free(s);
                                }
                                                 
                }              //end of else
                return f;
}

void search(struct node* f,int sr)
{
     struct node *t;
     int flag=0;      
   for(t=f;t!=NULL;t=t->next)
   {
                if(sr==t->data)
                {
                                flag=1;
                                break;
                }
   }
                 
   if(flag==1)
                printf("\nELEMENT IS FOUND ");
   else
                printf("\nELEMENT IS NOT PRESENT ");
}

 main()
{
  int ch,n,i,m,a,pos,sr,d;
  struct node *H;
  do
  {
    printf("\nMENU\n");
    printf("\n1.Create");
    printf("\n2.Display");
    printf("\n3.Search");
    printf("\n4.Insert");
    printf("\n5.Delete");
    printf("\n6.Exit\n");
    printf("\nEnter Ur Choice\n");
    scanf("%d",&ch);

    switch(ch)
    {
      case 1:
                   printf("\nHow many nodes you want to \n");
                   scanf("%d",&n);
                   H=create(n);
                   break;

       case 2:printf("\n Link list is :\n");
                   display(H);
                   break;

       case 3:
                   printf("\n Enter data to be search : ");
                   scanf("%d",&sr);
                   search(H,sr);
                   break;

       case 4: printf("\n Enter position to be data added :");
                   scanf("%d",&d);
                    H=insert(H,d);
                    break;

       case 5:printf("\n Enter position to be data deleted :");
                      scanf("%d",&d);
                       H=delete(H,d);
                    break;
                case 6: exit(0);
                   break;

       default :printf("\n Invalid choice ");     
     }
   } while(ch!=6);
  }