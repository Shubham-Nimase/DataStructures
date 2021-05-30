 5. Slip5_2 : Write a C program that accepts the graph as an adjacency matrix and converts it to adjacency list representation. Write a function to display the graph in adjacency list form.
1.Read a graph as adjacency Matrix                                                                         [5]
2.Creation of adjacency List                                                                                         [10]
3.Display adjacency List & In degree of any vertex i (take I as parameter to the function) each carries 5 marks                                                                                                                                     [10]


#include<stdio.h>
#include<malloc.h>
int n,g[10][10],v[10];
main()
{              int in,td=0,indegree=0,outdegree=0,n,i,j;
                printf("\n Enter total number of vertices : ");
                scanf("%d",&n);
                printf("\n Enter entries of an adjacency matrix :\n");
                for(i=0;i<n;i++)
                {
                                for(j=0;j<n;j++)
                                {
                                                printf("\n Enter a[%d][%d] : ",i+1,j+1);
                                                scanf("%d",&g[i][j]);
                                }
                }
                printf("\n Entered Adjacency matrix is … \n");
                for(i=0;i<n;i++)
                {
                                for(j=0;j<n;j++)
                                {
                                                printf("\t %d ",g[i][j]);
                                }
                printf("\n");
                }
                printf("\n Enter vertex to find indegree : ");
                scanf("%d",&in);
                for(i=0;i<n;i++)
                {
                                for(j=0;j<n;j++)
                                {
                                                if(i==in-1 && g[j][i]==1)
                                                {
                                                indegree++;
                                                }
                                }
                }
                 
                                printf("node=%d\t indegree=%d",in,indegree);

                 
                                //printf("Total Degree of graph =%d\n ",td);
}

Email This