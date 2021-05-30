 Slip no : 1_2, 9_1, 24_2

   Implement a class “data” to overload following functions as follows:
   a) int maximum(int, int) – returns the maximum between the two integer arguments       [2]
   b) int maximum(int *a, int arraylength) – returns the maximum integer from an array 'a'[5]
   c) void maximum(int *a, int arrarylength , int n) – display all elements from the array 'a'                       which  are greater than given number 'n'.                                                                          [5]
   d) int minimum( int, int) – returns the minimum between the two integer arguments        [2]
   e) int minimum( int *, int arraylength) – returns the minimum integer from an array 'a'  [5]
   f) void minimum(int *a, int arrarylength , int n) –display all elements from the array 'a'           hich  are smaller than given number „n?.                                                                          [5]
                      Write a main function that uses the above class and its member functions.                     [6]


#include<iostream>
using namespace std;
class Data
{
            public:
                        int maximum(int a,int b)
                        {           if(a>b)
                                    return a;
                                    else
                                                return b;
                        }
                        int maximum(int *a,int len)
                        {
                                    int max=a[0];

                                    for(int i=1;i<len;i++)
                                    {
                                                if(a[i]>max)
                                                            max=a[i];
                                    }
                                    return max;
                        }
                        void maximum(int *a,int len,int n)
                        {          
                                    for(int i=0;i<len;i++)
                                    {
                                                if(a[i]>n)
                                                {
                                                            cout<<"\n no="<<a[i];
                                                }
                                    }
                        }
                        int minimum(int a,int b)
                        {
                                    return a<b?a:b;
                        }
                        int minimum(int *a,int len)
                        {           int min;
                                    min=a[0];
                                    for(int i=0;i<len;i++)
                                    {
                                                if(a[i]<min)
                                                            min=a[i];
                                    }
                                    return min;
                        }

                        void minimum(int *a,int len,int n)
                        {           for(int i=0;i<len;i++)
                                    {           if(a[i]<n)
                                                {
                                                            cout<<"\n no="<<a[i];
                                                }
                                    }
                        }
};

main()
{
            Data ob;
            int n1,n2,num,n,max,min;
            cout<<"\n Enter two elements:";
            cin>>n1;
            cin>>n2;
            max=ob.maximum(n1,n2);
            cout<<"\n max no ="<<max;
            cout<<"\n Enter how many elements for array : ";
            int a[10];
            cin>>n;
            for(int i=0;i<n;i++)
            {
                        cout<<"\n Enter element : ";
                        cin>>a[i];
            }
            cout<<"\n Max element of given array : "<<ob.maximum(a,n);
            cout<<"\n Enter a no :";
            cin>>num;
            cout<<"\n Elements grater than "<<num;
            ob.maximum(a,n,num);

            cout<<"\n Enter two elements:";
            cin>>n1;
            cin>>n2;
            min=ob.minimum(n1,n2);
            cout<<"\n min no is = "<<min;
            cout<<"\n Min element of an array : "<<ob.minimum(a,n);
            cout<<"\n Enter a no:";
            cin>>num;
            cout<<"\n Elements less than "<<num;
            ob.minimum(a,n,num);          
}

