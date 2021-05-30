
#include<stdio.h>
typedef struct employee
{
                int age;
                char name[10];
}record;
record employee[100];

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
                }
                return (i-1);
}
void writefile(record *a,int n)
{
                int i=0;
                FILE *fp;
                if((fp=fopen("sorted_on_age_emp.txt","w"))!=NULL)
                {
                                for(i=0;i<n;i++)
                                                fprintf(fp,"%d%s\n",a[i].age,a[i].name);
                }}
void insertion(record *a,int n)
{
                int i,j;
                record t;
                for(i=1;i<n;i++)
                {
                                t=a[i];
                                for(j=i-1;j>=0 && a[j].age>t.age;j--)
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