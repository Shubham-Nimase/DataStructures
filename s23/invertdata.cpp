Slip no : 10_1,13_1,23_2

Implement a class "invertdata" to overload "invert" function as follows:
a) int invert ( int) - returns the inverted integer. Eg. invert(5438) will return 8345             [10]
b) char * invert ( char *) – returns the reversed string – reverse(“comp”) will return ”pmoc”[8]
c) void invert( int * ) – will reverse the array order – An array [5, 7, 12, 4] will be inverted to [4, 12, 7,5].                                                                                                                                   [7]
Write a main function that uses the above class and its member functions.                        [5]



#include<iostream>
#include<string.h>
using namespace std;
int cnt=0;
class invertdata
{
            public:
            int invert(int n)
            {
                        int rev=0,r;
                        while(n!=0)
                        {
                        r=n%10;
                        rev=rev*10+r;
                        n=n/10;
                        }
            return rev;
            }
            char *invert(char *s1)
            {
                        int i,j,len;
                        len=strlen(s1);
                        char *s2=new char[len+1];
                         
                        for(i=(len-1),j=0;i>=0;i--,j++)
                        {
                                    s2[j]=s1[i];
                        }
                        s2[j]='\0';
                        return s2;
            }
            void invert(int *p)
            {           int i;
                        for(i=cnt-1;i>=0;i--)
                        {
                                    cout<<p[i]<<"\t";
                        }
            }
}ob1;

main()
{
int n;
char *str,*str1;
cout<<"Enter the value of n : ";
cin>>n;

cout<<"\n Inverted No = "<<ob1.invert(n);

str=new char[20];
str1=new char[20];
cout<<"\nEnter the string : ";
cin>>str;
str1=ob1.invert(str);
cout<<"\n Inverted String =  "<<str1<<endl;

int a[20];
cout<<"Enter how many elements in array :\n";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"\n Enter element : ";
cin>>a[i];
cnt++;
}
cout<<"\n Inverted Array is ";
ob1.invert(a);
}