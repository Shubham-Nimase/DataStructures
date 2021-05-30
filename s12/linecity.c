 13. Slip13_1 : Read the data from file "sortedcities.txt" containing names of 10 cities and their STD codes. Accept a name of the city from user and use binary search algorithm to check whether the name is present in the file and output the STD code, otherwise output “city not in the list”.
Accept & Display Function                                                                                            [8]
Binary Search Function


#include<stdio.h>
#include<string.h>

typedef struct city
{
                char name[30];
                int code;
}record;
record city[100];
int read_file(record *a)
{
                int i=0;
                FILE *fp;
                if((fp=fopen("sortedcities.txt","r"))!=NULL)
                                while(!feof(fp))
                                {
                                                fscanf(fp,"%s%d",a[i].name,&a[i].code);
                                                i++;
                                }
                return (i-1);
}
void write_file(record *a,int n)
{
                int i=0;
                FILE *fp;
                if((fp=fopen("sorted_cities.txt","w"))!=NULL)
                                for(i=0;i<n;i++)
                                                fprintf(fp,"\n%s\t%d",a[i].name,a[i].code);
}
void sort(record *a,int n)
{
                int i,j;
                record t;
                for(i=1;i<n;i++)
                {
                                for(j=0;j<n-i;j++)
                                {
                                                if(strcmp(a[j].name,a[j+1].name)>0)
                                                {
                                                                t=a[j];
                                                                a[j]=a[j+1];
                                                                a[j+1]=t;
                                                }
                                }
                }
}
int read_file1(record *a)
{
                int i=0;
                FILE *fp;
                if((fp=fopen("sorted_cities.txt","r"))!=NULL)
                                while(!feof(fp))
                                {
                                                fscanf(fp,"%s%d",a[i].name,&a[i].code);
                                                i++;
                                }
                return (i-1);
}
void b_search(record *a,int n,char key[20])
{
                int l,h,mid;
                l=0;
                h=n-1;
                while(h>=l)
                {
                                mid=(l+h)/2;
                                if(strcmp(key,a[mid].name)==0)
                                {
                                                printf("\nSTD code:%d\n ",a[mid].code);
                                                break;
                                }
                                else if(strcmp(key,a[mid].name)<0)
                                                h=mid-1;
                                else
                                                l=mid+1;
                }
                if(h<l)
                                printf("\ncity not in list\n");
}
main()
{
                char key[20];
                int n,m;
                n=read_file(city);
                sort(city,n);
                write_file(city,n);
                printf("\nenter city name\n");
                scanf("%s",key);
                b_search(city,n,key);
}

Email This