 Slip18_1 : Implement a list library (doublylis.h) for a doubly linked list with the operations create, Insert,display. Write a menu driven program to call these operations.
Create Insert at end, Display carries 5 mark each                                               [15]


#include<stdio.h>
#include<stdlib.h>
#include "doublylist.h"

void main()
{
int n,ch,sr,d;
struct dnode *H;
 do
  {
    printf("\nMENU\n");
    printf("\n1.Create");
    printf("\n2.Insert");
    printf("\n3.Display");
    printf("\n4.Exit\n");
    printf("\nEnter Ur Choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
                   printf("\nHow many nodes you want to \n");
                   scanf("%d",&n);
                   H=create(n);
                   break;
      
       case 2: printf("\n Enter position to be data added :");
                   scanf("%d",&d);
                    H=insert(H,d);
                    break;

                case 3:printf("\n Link list is :\n");
                   display(H);
                   break;

                case 4: exit(0);
                   break;

       default :printf("\n Invalid choice ");     
     }
   }while(ch!=4);
  }

