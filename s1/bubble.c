Sort a random array of n integers (accept the value of n from user) in ascending order
by using bubble sort algorithm.

#include<stdio.h>
void bubble(int a[20],int n)
{
                int i,j,temp;
                for(i=1;i<n;i++)
                {
                                for(j=0;j<n-i;j++)
                                {
                                                if(a[j]>a[j+1])
                                                {
                                                                temp=a[j];
                                                                a[j]=a[j+1];
                                                                a[j+1]=temp;
                                                }
                                }
                }
}

void generate(int a[20],int n)
{
                int i;
                for(i=0;i<n;i++)
                                a[i]=rand()%1000;
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
                printf("\nenter how many elemants:");
                scanf("%d",&n);
                generate(a,n);
                printf("\n elements are:\n");
                display(a,n);
                bubble(a,n);
                printf("\n after sorting elements are :\n");
                display(a,n);
