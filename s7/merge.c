 7. Slip 7_1 : Sort a random array of n integers (accept the value of n from user) in ascending order by using a
   recursive Merge sort algorithm.
   Accept & Display Function                                         [8]
   Merge Sort Function                                                   [7]


#include<stdio.h>
merge(int a[10],int l,int m,int u)
{
                int c[10],i,j,k;
                i=l;
                j=m+1;
                k=0;
                while(i<=m && j<=u)
                {
                                if(a[i]<a[j])
                                {
                                                c[k]=a[i];
                                                k++;i++;
                                }
                                else
                                {
                                                c[k]=a[j];
                                                k++;j++;
                                }
                }
                while(i<=m)
                {
                                c[k]=a[i];
                                i++;k++;
                }
                while(j<=u)
                {
                                c[k]=a[j];
                                k++;j++;
                }
                for(i=l,j=0;i<=u;i++,j++)
                                a[i]=c[j];
}

void generate(int a[10],int n)
{
                int i;
                for(i=0;i<n;i++)
                                a[i]=rand()%10;
}

merge_sort(int a[10],int i,int j)
{
                int k=0;
                if(i<j)
                {
                                k=(i+j)/2;
                                merge_sort(a,i,k);
                                merge_sort(a,k+1,j);
                                merge(a,i,k,j);
                }
}

main()
{
                int i,n,a[10];
                printf("how many elements:");
                scanf("%d",&n);
                generate(a,n);
                printf("elements are:\n");
                for(i=0;i<n;i++)
                                printf("%d\t",a[i]);
                merge_sort(a,0,n-1);
                printf("\nafter sorting:\n");
                for(i=0;i<n;i++)
                printf("%d\t",a[i]);
}

