 2.  Slip 2_1 : Sort a random array of n integers (accept the value of n from user) in ascending order by using insertion sort algorithm.*


#include<stdio.h>

void insertion(int a[10],int n)
{
                int i,j,key;
                for(i=1;i<n;i++)
                {
                                key=a[i];
                                for(j=i-1;j>=0 ;j--)
                                {
                                                if(key<a[j])
                                                a[j+1]=a[j]; //shifting
                                                else break;
                                }
                                a[j+1]=key;
                }
}

void generate(int a[20],int n)
{
                int i;
                for(i=0;i<n;i++)
                a[i]=rand()%2000;
}

void display(int a[],int n)
{              int i;
                for(i=0;i<n;i++)
                {
                                printf("%d\t",a[i]);
                }
}

main()
{
                int a[20],i,j,n;
                printf("\n Enter how many elemants:");
                scanf("%d",&n);
                generate(a,n);
                printf("\n Elements are:\n");
                display(a,n);
                insertion(a,n);
                printf("\n After sorting elements are :\n");
                display(a,n);
}

