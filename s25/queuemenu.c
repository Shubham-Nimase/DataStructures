 18. Slip18_2 :  Implement a queue library (stqueue.h) of integers using a static implementation of the queue and implementing the Insert,Delete,IsEmpty,IsFull,Init,Peek operations. Write a Menu driven program that includes queue library and calls different queue operations.Insert, Delete operation carries 8 mark each.IsEmpty,IsFull function carries 3 mark each.Init ,Peek function.


#include<stdio.h>
#include"stqueue.h"

main()
{
int n,i=0,ch;
struct node p;

init(&p);

do
{
printf("\nchoices are:\n1:push/insert into queue\n2:pop/delete from queue\n3:check whether queue is empty or not\n4:check whether queue is full or not\n5:peek(top) element of queue\n6:exit\n");
printf("enter your choice: ");
scanf("%d",&ch);

switch(ch)
{
case 1:printf("\nenter element:");
       scanf("%d",&n);
       add(&p,n);
       break;

case 2:printf("deleted elements is:%d",del(&p));
       break;

case 3:i=isempty(&p);
       if(i==1)
       printf("\nqueue is empty");
       else
       printf("\nqueue is not empty");
       break;

case 4:i=isfull(&p);
       if(i==1)
       printf("\nqueue is full");
       else
       printf("queue is not full");
       break;

case 5://n1=peek();
       printf("top element of queue is:%d",peek(&p));
       break;

case 6:exit(0);
}
}  while(ch!=6);
}
