 Slip15_2 : Implement a stack library (dystack.h) of integers using a dynamic (linked list) implementation of  the stack and implementing the init,push,pop,peek & isempty operations. Write a menu driven program that includes stack library and calls different stack operations. Push & Pop operation carries 8 marks each.                                                                                                                        [16]


#include<stdio.h>
#include"dystack.h"

main()
{
                int n,i=0,ch;
                init();
               
do
                {
                printf("\nchoices are:\n1:push into stack\n2:pop from stack\n3:check whether stack is empty or not\n4:check whether stack is full or not\n5:peek(top) element of stack\n6:display elements of stack\n7:exit\n");
                printf("enter your choice: ");
                scanf("%d",&ch);

                switch(ch)
                {
                                case 1: printf("\nenter element:");
                                                scanf("%d",&n);
                                                push(n);
                                                break;
                                case 2:
                                                printf("\ndeleted elements is:%d",pop());
                                                break;
                                case 3: i=isempty();
                                                if(i==1)
                                                                printf("\nstack is empty");
                                                else
                                                                printf("\nstack is not empty");
                                                break;
                                case 4: i=isfull();
                                                if(i==1)
                                                                printf("\nstack is full");
                                                 else
                                                                printf("\nstack is not full");
                                                break;
                                case 5: printf("\ntop element of stack is:%d",peek());
                                                break;
                                case 6: display();
                                                break;
                                case 7:exit(0);
                }
}while(ch!=7);
}

Email This