 8. Slip 8_1 : Sort a random array of n integers (accept the value of n from user) in ascending order by using
   recursive Quick sort algorithm.
   Accept & Display Function                                                         [8]
   Quick Sort Function                                                                      [7]


#include<stdio.h>
enum bool {false,true};
void disp(int a[],int l,int u)
{
                int i;
                for(i=l;i<=u;i++)
                                printf("%d\t",a[i]);
}

void quick(int a[],int l,int u)
{
                int temp,piv,left,right;
                enum bool pivot_places=false;
                left=l;
                right=u;
                piv=l;
                if(l>=u)
                                return;
                printf("\nsublist:\n");
                disp(a,l,u);
                while(pivot_places==false)
                {
                                while(a[piv]<=a[right] && piv!=right)
                                                right--;
                                if(piv==right)
                                                pivot_places=true;
                                if(a[piv]>a[right])
                                {
                                                temp=a[piv];
                                                a[piv]=a[right];
                                                a[right]=temp;
                                                piv=right;
                                }
                                while(a[piv]>=a[left] && piv!=left)
                                                left++;
                                if(piv==left)
                                                pivot_places=true;
                                if(a[piv]<a[left])
                                {
                                                temp=a[piv];
                                                a[piv]=a[left];
                                                a[left]=temp;
                                                piv=left;
                                }
                }
                disp(a,l,u);
                quick(a,l,piv-1);
                quick(a,piv+1,u);
}

void generate(int a[],int n)
{
                int i;
                for(i=0;i<n;i++)
                                a[i]=rand()%20;
}

main()
{
                int a[10],n,i;
                printf("how many elements:");
                scanf("%d",&n);
                generate(a,n);
                printf("\nelements are:");
                for(i=0;i<n;i++)
                                printf("%d\t",a[i]);
                quick(a,0,n-1);
                printf("\nafter sorting:\n");
                for(i=0;i<n;i++)
                                printf("%d\t",a[i]);
}


Email This