 17. Slip17_1 : Implement a list library (singlylist.h) for a singly linked list with the operations create, search,display. Write a menu driven driver program to call these operations.
Create ,Search, Display operation carries 5 each                                                [15]


#include<stdio.h>
#include<stdlib.h>
#include "singlylist.h"

main()
{
                int n,ch,sr;struct node *h;
                 
                do
                {
                                printf("\nchoices are:\n1:Create Linked List\n 2:Search Linked List\n3:Display Linked List\n4:exit\n");
                                printf("enter your choice: ");
                                scanf("%d",&ch);
                                switch(ch)
                                {
                                case 1: printf("\nEnter how many nodes :");
                                                scanf("%d",&n);
                                                h=create(n);
                                                break;
                                 
                                case 2: printf("\n Enter data to be search : ");
                                                scanf("%d",&sr);
                                                search(h,sr);
                                                break;
                                 
                                case 3: display(h);
                                                break;
                                case 4: exit(0);
                                }
                }while(ch!=4);
}
