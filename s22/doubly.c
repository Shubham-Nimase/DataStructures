 SY_BCS_DS_SLIP 20_1


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
    printf("\n2.Search");
    printf("\n3.Display");
    printf("\n4.Exit\n");
    printf("\nEnter Ur Choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("\nHow many nodes you want to \n");
                      scanf("%d",&n);
                      H=create(n);
                      break;
      
      case 2: printf("\n Enter data to be search : ");
                      scanf("%d",&sr);
                      search(H,sr);
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
