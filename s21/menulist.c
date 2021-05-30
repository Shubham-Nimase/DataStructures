 21.Slip21_2 : Implement a list library (singlylist.h) for a singly linked list with create() ,display(), insert(), delete() operations. Write a menu driven driver program to call the operations.
Slip no 18_1, 19-1, 22_1, 24_1, 14_2, 21_2, 26_2 */


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
   }while(ch!=6);
  }


Email This