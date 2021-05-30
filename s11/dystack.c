


11. Slip11_2 : Implement a stack library (dystack.h) of integers using a dynamic (linked list) implementation of
the stack and implementing the Push,Pop,IsEmpty,Init,Peek operations. Write a menu driven program
that includes stack library and calls different stack operations.
Push & Pop operation carries 8 mark each                                             [16]
Isempty & Peek carries 4 mark each                                                         [8]
Init function                                                                                                       [1]




#include<stdio.h>
#include<stdlib.h>
#include"dynamic_stack.h"
main()
{
                int n,i=0,ch;
                struct node *s;
                init();
                do
                {
                                printf("\nchoices are:\n1:push into stack\n2:pop from stack\n3:check whether stack is empty or not\n4:display \n5:Peek of stack \n6:exit\n");
printf("enter your choice: ");
scanf("%d",&ch);
               
                                switch(ch)
                                {
                                                case 1:printf("\nenter element:");
                                                                scanf("%d",&n);
                                                                push(n);
                                                                break;
                                                case 2:printf("deleted elements is:%d",pop());
                                                                break;
                                                case 3:i=isempty();
                                                                if(i==1)
                                                                printf("\nstack is empty");
                                                                else
                                                                printf("\nstack is not empty");
                                                                break;
                                                case 4:  display();
                                                                break;
                                                case 5: printf("\n peek of stack is %d ",peek());
                                                                break;
                                                case 6: exit(0);
                                }
                }while(ch!=6);
