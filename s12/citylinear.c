 12.  Slip12_1 : Read the data from file 'cities.txt' containing names of 10 cities and their STD codes.
Accept a  name of the city from user and use linear search algorithm to check whether the name is present in the  file and output the STD code, otherwise output �city not in the list�.
   Accept & Display Function                                                         [8]
   Linear Search Function                                                                               [7]


#include<stdio.h>
#include<string.h>

typedef struct city
{
                char name[20];
                int code;
}record;
record city[100];
int read_file(record *a)
{
                int i=0;
                FILE *fp;
                if((fp=fopen("cities.txt","r"))!=NULL)
                {
                                while(!feof(fp))
                                {
                                                fscanf(fp,"%s%d",a[i].name,&a[i].code);
                                                i++;
                                }}
                return (i-1);
}

void l_search(record *a,int n,char x[20])
{
                int i;
                for(i=0;i<n;i++)
                {
                                if(strcmp(a[i].name,x)==0)
                                {
                                                printf("\n%s=%d\n",a[i].name,a[i].code);
                                                break;
                                }
                }
                if(i==n)
                                printf("\ncity not found\n");
}

main()
{
                char x[20];
                int n;
                n=read_file(city);
                printf("\nenter city name\n");
                gets(x);
                l_search(city,n,x);
}

