 4. Slip 4_1: Read the data from the file “employee.txt” and sort on age using Bubble sort.
   Reading the contents of File & Display Function              [10]
   Bubble sort Function                                                                   [5]


#include<stdio.h>
typedef struct employee
{
                char name[10];
                int age;
}record;

record employee[100];

int readfile(record *a)
{
                int i=0;
                FILE *fp;
                if((fp=fopen("emp.txt","r"))!=NULL)
                {while(!feof(fp))
                                {
                                                fscanf(fp,"%d%s",&a[i].age,a[i].name);
                                                i++;
                                }
                }
                return(i-1);
}

void writefile(record *a,int n)
{
                int i=0;
                FILE *fp;
                if((fp=fopen("sorted_emp_on_age.txt","w"))!=NULL)
                {
                                for(i=0;i<n;i++)
                                                fprintf(fp,"%d%s\n",a[i].age,a[i].name);
                }
}

void bubble_sort(record *a,int n)
{
                int i,j; record t;
                for(i=1;i<n;i++)
                {
                                for(j=0;j<n-i;j++)
                                {
                                                if(a[j].age>a[j+1].age)
                                                {
                                                                t=a[j];
                                                                a[j]=a[j+1];
                                                                a[j+1]=t;
                                                }
                                }
                }
}

main()
{
                int n;
                n=readfile(employee);
                bubble_sort(employee,n);
                writefile(employee,n);
}

