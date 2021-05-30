 9. Slip 9_1 :. Read the data from the „employee.txt? file and sort on age using Merge sort and write the sorted
   data to another file 'sorted_emp_on_age.txt'.
   Reading & Display the file [10]
   Merge sort Function [5]



include<stdio.h>
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
                                }}
                return(i-1);
}

void writefile(record *a,int n)
{
                int i=0;
                FILE *fp;
                if((fp=fopen("sorted_emp_on_age_merge.txt","w"))!=NULL)
                {
                                for(i=0;i<n;i++)
                                                fprintf(fp,"%d%s\n",a[i].age,a[i].name);
                }}

merge(record *a,int l,int m,int u)
{
                record c[10]; int i,j,k;
                i=l;
                j=m+1;
                k=0;
                while(i<=m && j<=u)
                {
                                if(a[i].age<a[j].age)
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

merge_sort(record *a,int i,int j)
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
                int n;
                n=readfile(employee);
                merge_sort(employee,0,n-1);
                writefile(employee,n);
}

Email This