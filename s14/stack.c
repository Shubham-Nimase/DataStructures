 14. Slip14_1 : Implement a stack library (stack.h) of integers using a static implementation of the stack and implementing the Init(),Push(),Pop(),IsEmpty()& IsFull() these operations. Write a Menu driven program that includes stack library and calls different stack operations Push & Pop Function each carries Init Function IsEmpty Function & IsFull Function each carries 2 marks.


#include<stdio.h>
#include"stack.h"
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

