 10.Slip10_1 : Read the data from the "employee.txt? file and sort on age using Quick sort and write the sorted
   data to another file 'sortedemponage.txt'.
   Reading & Display the file                                          [10]
   Quick sort Function                                                      [5]



#include<stdio.h>
enum bool {false,true};

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
                if((fp=fopen("sorted_on_age_quick.txt","w"))!=NULL)
                {
                                for(i=0;i<n;i++)
                                {
                                                fprintf(fp,"%d%s\n",a[i].age,a[i].name);
                                }
                }
}
//enum bool {false,true};
void quick(record *a,int l,int u)
{
                record temp;int piv,left,right;
                enum bool pivot_places=false;
                left=l;
                right=u;
                piv=l;
                if(l>=u)
                                return;
                /*
                   printf("\nsublist:\n");
                   disp(a,l,u);*/
                while(pivot_places==false)
                {
                                while(a[piv].age<=a[right].age && piv!=right)
                                                right--;
                                if(piv==right)
                                                pivot_places=true;
                                if(a[piv].age>a[right].age)
                                {
                                                temp=a[piv];
                                                a[piv]=a[right];
                                                a[right]=temp;
                                                piv=right;
                                }
                                while(a[piv].age>=a[left].age && piv!=left)
                                                left++;
                                if(piv==left)
                                                pivot_places=true;
                                if(a[piv].age<a[left].age)
                                {
                                                temp=a[piv];
                                                a[piv]=a[left];
                                                a[left]=temp;
                                                piv=left;
                                }
                }
                //disp(a,l,u);
                quick(a,l,piv-1);
                quick(a,piv+1,u);
}

main()
{
                int n;
                n=readfile(employee);
                quick(employee,0,n-1);
                writefile(employee,n);
}

