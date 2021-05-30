 Slip6_2 . Write a C program that accepts the graph as an adjacency matrix and checks if the graph is
undirected. The matrix for undirected graph is symmetric. Also calculate in degree of all vertices
Read a graph as adjacency Matrix                                                                                                                             [5]
Check the matrix is symmetric or not                                                                                                      [10]
Calculate in degree of all vertices                                                                                                                              [10]

#include
#include
struct n
 {
                int data;
                struct n *link;
 };
                typedef struct n NODE;
                NODE *getnode(int);
                NODE *findlast(NODE *);
                void display(NODE *[],int);
void main()
 {
                NODE *ptr,*temp,*h[10];
                int n,a[10][10],i,j;
                printf("\n Enter total number of vertices : ");
                scanf("%d",&n);
                printf("\n Enter entries of an adjacency matrix :\n");
                for(i=0;i
                {
                                for(j=0;j
                                {
                                                printf("\n Enter a[%d][%d] : ",i+1,j+1);
                                                scanf("%d",&a[i][j]);
                                }
                }
                printf("\n Entered Adjacency matrix is … \n");
                for(i=0;i
                {
                                for(j=0;j
                                {
                                                printf("\t %d ",a[i][j]);
                                }
                printf("\n");
                }
                for(i=0;i
                h[i]=NULL;
                for(i=0;i
                {
                                for(j=0;j
                                {
                                                if(a[i][j]==1)
                                                {
                                                                temp=getnode(j+1);
                                                                if(h[i]==NULL)
                                                                h[i]=temp;
                                                                else
                                                                {
                                                                                ptr=findlast(h[i]);
                                                                                ptr->link=temp;
                                                                }
                                                }
                                }
                }
                printf("\n The Adjacency list looks like … \n");
                display(h,n);

                int g[10][10],outdegree=0,td=0;
                printf("Enter How many nodes");
                scanf("%d",&n);
                printf("Enter Matrix elements");
                for(i=0;i
                                for(j=0;j
                                                scanf("%d",&g[i][j]);
                for(i=0;i
                {
                                outdegree=0;
                                for(j=0;j
                                {
                                                if(g[i][j]==1)
                                                {
                                                                outdegree++;
                                                                td+=1;
                                                }

                                                if(g[j][i]==1)
                                                {
                                                                indegree++;
                                                                td+=1;
                                                }

                                }
                                printf("\n Node\t%d \tindegree=%d\t Outdegree=%d\n",i,indegree,outdegree);
                }
                printf("%d",td);






 }
NODE *getnode(int j)
{
                NODE * temp;
                temp=(NODE *)malloc(sizeof(NODE));
                temp->data=j;
                temp->link=NULL;
                return(temp);
}
NODE *findlast(NODE *h)
{
                NODE *ptr;
                for(ptr=h;ptr->link!=NULL;ptr=ptr->link);
                return(ptr);
}
void display(NODE *h[10],int n)
{
                NODE *ptr;
                int i;
                for(i=0;i
                {
                                printf(" V%d ",i+1);
                                ptr=h[i];
                                if(ptr==NULL)
                                printf(" NULL");
                                while(ptr!=NULL)
                                {
                                                printf(" ->V%d",ptr->data);
                                                ptr=ptr->link;
                                }
                                printf("\n");
                }
}
