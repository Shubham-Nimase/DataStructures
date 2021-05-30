 Slip no : 20_2,21_1

 Implement a class vector which contains integers in sorted order. The size of the vector varies so the memory should be dynamically allocated. It should have three data members vectorarray – a  pointer to integer, maxsize – the maximum allocated size to take care of insertions and size – actual  size. Write member function for:
a) Parameterized constructor &copy constructor-each carries 5 marks.                             [10]
b) get value at a particular position in vector                                                                        [3]
c) insert values in vector to keep it in sorted order                                                               [5]
d) print the vector                                                                                                                   [2]
e) Implement the member functions to form union of two vectors.                         [5]
Write the main function to illustrate the use of the class and member function.                [5]


#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Vector
{
            int *vectorarray;
            int maxsize,size;
            public:
            Vector(){}
            Vector(int m,int s)
            {
                        maxsize=m;
                        size=s;
                        vectorarray= new int[maxsize];
                        for(int i=0;i< size;i++)
                                    cin>>vectorarray[i];
                        cout<<"Array is\n";
                        print();
            }
            void print()
            {           for( int i=0; i< size; i++)
                                    cout<<vectorarray[i]<<endl;
            }

            void set()
            {           for(int i=1;i<size;i++)
                        {           for(int j=0;j<size-1;j++)
                                    {
                                                if (vectorarray[j]>vectorarray[j+1])
                                                {
                                                            int t=vectorarray[j];
                                                            vectorarray[j]=vectorarray[j+1];
                                                            vectorarray[j+1]=t;
                                                }
                                    }
                        }
                        cout<<"Sorteted Array is\n";
                        print();
            }
            void insert(int x)
            {
                        int i,j,k;
                        for(int i=0;i<size;i++)
                        {
                                    if(x<=vectorarray[i])
                                    {           int j;
                                                for(j=size+1;j>i;j--)
                                                            vectorarray[j]=vectorarray[j-1];
                                                            vectorarray[j]=x;
                                                            size=size+1;
                                                break;
                                    }
                        }
                        cout<<"Sorteted Array after insertion is\n";
                        for(i=0; i<=size; i++)
                                    {
                                                cout<<vectorarray[i]<<endl;                                  
                                    }

            }

     Vector Union_vector(Vector v1,Vector v2)
    {   
            int i = 0, j = 0, k = 0;
            Vector temp;
            temp.maxsize=v1.size+v2.size;
            vectorarray= new int[temp.maxsize];
                 
            while ((i < v1.size) && (j < v2.size))
        {   if (v1.vectorarray[i] < v2.vectorarray[j])
           {                temp.vectorarray[k] = v1.vectorarray[i];
                i++;
                k++;
            }
            else if (v1.vectorarray[i] > v2.vectorarray[j])
            {   temp.vectorarray[k] = v2.vectorarray[j];
               j++;
                k++;
            }
            else
            {
               temp.vectorarray[k] = v1.vectorarray[i];
                i++;
                j++;
                k++;
            }
        }

        /*if (i == v1.size)
        {
           while (j < v2.size)
            {
                union_array[k] = array2[j];
                j++;
                k++;
            }
        }
       else
        {
          while (i < SIZE)
            {
               union_array[k] = array1[i];
               i++;
                k++;
           }
        }*/
        return temp;
    }

            void position(int p)
            {
                        if(p>=0 && p<size)
                        {
                                    cout<<"Element at position "<<p <<" = "<< vectorarray[p];
                        }
                        cout<<"Enter valid position";
            }

};

main()
{

  int x;
            int maxsize,size;
   cout<<"Enter maximum size of 1st vector \n";
   cin>>maxsize;         
  cout<<"Enter how many numbers you want enter array: \n";
  cin>>size;

  Vector v1(maxsize,size);
  v1.set();
             
cout<<"Enter element \n";
  cin>>x;
  v1.insert(x);
  int p;
            cout<<"\n Enter position to display";
            cin>>p;
            v1.position(p);

cout<<"Enter maximum size of 2nd vector \n";
   cin>>maxsize;         
  cout<<"Enter how many numbers you want enter in 2nd vector: \n";
  cin>>size;

  Vector v2(maxsize,size);
  v2.set();

            Vector v3,v4;
            v3=v4.Union_vector(v1,v2);
            cout<<"union of 1st and 2nd vector is :";
            v3.print();
            v3.set();
 
}
