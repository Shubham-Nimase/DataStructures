 6.  Slip6_1 : Read the data from the file “employee.txt” and sort on names in alphabetical order (use                                 using Insertion sort
   1.Reading the contents of File & Display Function                          [10]
   2.Insertion sort Function                                                                           [5]
 
#include<stdio.h>
typedef struct employee
{
                int age; char name[10];
}record;

record employee[50];

int readfile(record *a)
{
                int i=0;
                FILE *fp;
                if((fp=fopen("emp.txt","r"))!=NULL)
                {
                                while(!feof(fp))
                                {
                                                fscanf(fp,"%d%s",&a[i].age,a[i].name);
                                                i++;
                                }
                }return (i-1);
}

void writefile(record *a,int n)
{
                int i;
                FILE *fp;
                if((fp=fopen("sorted_on_name_insertion.txt","w"))!=NULL)
                {
                                for(i=0;i<n;i++)
                                {
                                                fprintf(fp,"%d%s\n",a[i].age,a[i].name);
                                }
                }
}

void insertion(record *a,int n)
{
                int i,j;
                record t;
                for(i=1;i<n;i++)
                {
                                t=a[i];
                                for(j=i-1;j>=0 && (strcmp(a[j].name,t.name)>=0);j--)
                                {
                                                a[j+1]=a[j];
                                                a[j]=t;
                                }
                }
}

main()
{
                int n;
                n=readfile(employee);
                insertion(employee,n);
                writefile(employee,n);
}

Email This