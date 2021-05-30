 16. Slip16_1 : Implement a list library (singlylist.h) for a singly linked list with the operations create, Delete,display. Write a menu driven program to call these operations.
Create & Delete at front, Display Operation Carries 5 each Marks.                             [15]


#include<stdio.h>
#include<stdlib.h>
#include "singlylist.h"

main()
{
                int n,ch,d;struct node *h;
                 
                do
                {
                                printf("\nchoices are:\n1:Create Linked List\n2:Delete Linked List\n3:Display Linked List\n3:exit\n");
                                printf("enter your choice: ");
                                scanf("%d",&ch);
                                switch(ch)
                                {
                                case 1: printf("\nEnter how many nodes :");
                                                scanf("%d",&n);
                                                h=create(n);
                                                break;
                                 
                                case 2:  printf("\n Enter position to be data deleted :");
                                                scanf("%d",&d);
                                                h=delete(h,d);
                    break;
                                case 3: display(h);
                                                break;                   case 4: exit(0);
                                }
                }while(ch!=4);
}
