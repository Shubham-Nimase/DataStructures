
2. slip2_2 : There are lists where insertion should ensure the ordering of data elements. Since the elements are in ascending order the search can terminate once equal or greater element is found. Implement a singly linked list of ordered integers (ascending/descending) with insert, search and display operations.
i. Search, Display operation carries 5 marks each                               
ii. Validate at appropriate position           
iii. Creation of singly linked list in sorted order                                                                                                                     

#include<stdio.h>
#include<stdlib.h>
#define newnode (struct node *)malloc(sizeof(struct node));
struct node
{
                int data;
                struct node *next;
};

struct node* create(int n)
{
                struct node *f,*s;
                int i;
                f = newnode;
                printf("\n  Enter the data :");
                scanf("%d",&f->data);
                s = f;
                for(i=2;i<=n;i++)
                {
                                s->next = newnode;
                                s = s->next;
                                printf("\n  Enter the data :");
                                scanf("%d",&s->data);
                }
                s->next=NULL;
                return f;
}

void display(struct node* f)
{
                struct node *t;
                printf("\n Link list is : \n");
                for(t=f; t!=NULL; t=t->next)
                printf("\t %d",t->data);
}

struct node *insert(struct node *f,int p)
{
                int cnt=0,i;
                struct node *t,*s;

                for(t=f; t!=NULL; t=t->next)
                {
                                cnt++;
                }
                 
                if(p>=cnt)
                printf("\n Invalid position");
                else
                {
                                s=newnode;
                                printf("\n  Enter the data :");
                                scanf("%d",&s->data);
                                if(p==1)
                                {
                                                s->next = f;
                                                f=s;
                                }
                                else
                                {
                                                for(i=1,t=f;i<=p-2;i++)
                                                t=t->next;
                                                s->next = t->next;
                                                t->next = s;
                                }
                 
                }
                return f;
}

void sort(struct node *f)
{
                struct node *p,*q;
                int temp;

                for(p=f;p!=NULL;p=p->next)
                {
                                for(q=p->next;q!=NULL;q=q->next)
                                {
                                                if(p->data > q->data)
                                                {
                                                                temp=p->data;
                                                                p->data=q->data;
                                                                q->data=temp;
                                                }
                                }
                }

}

main()
{
                int n,p,p1,ch;
                struct node *l;
                do
                {
                                printf("\n\n 1.create link list \n 2. dispaly \n 3.insert into link list \n 4.sorted order \n 0.exit ");
                                printf("\n \n Enter Your choice");
                                scanf("%d",&ch);
                                switch(ch)
                                {
                                                case 1 :printf("\n Enter how manu elements you wnt to enter :");
                                                                scanf("%d",&n);
                                                                l=create(n);       
                                                                break;
                                                case 2 : display(l);
                                                                break;
                                                case 3 :printf("\n Enter the position to enter data");
                                                                scanf("%d",&p);
                                                                l=insert(l,p);
                                                                break;
                                                case 4:sort(l);
                                                                break;
                                                case 0 :exit(0);
                                                default : printf("\n Invalid choice");
                 
                                                 
                                 
                                }
                }while(ch!=0);


}
