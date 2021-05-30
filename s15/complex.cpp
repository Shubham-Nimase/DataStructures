 Slip no : 5_1, 15_2,19_2

Define a class named Complex for representing complex numbers. A complex number has the general form a + ib, where a- the real part, b - the imaginary part are both real numbers and i2=-1. Define parameterized and default constructor. Overload +, - and * operators with usual meaning.
a) Default constructor & Parameterized constructor-each carries 3 marks                         [6]
b) Overloading of + operator & - operator- each carries 5 marks                                        [10]
c) Overloading of * operator                                                                                                  [9]
Write a main function that uses the above class and its member functions.                        [5]


#include<iostream>
using namespace std;
class complex
{
            float x, y;
            public:
            complex()
            {
            }
            complex(float r,float img)
            {
                        x=r;
                        y=img;
            }
            friend complex operator +(complex,complex);
            friend complex operator -(complex,complex);
            friend complex operator *(complex,complex);
            void display()
            {
                        cout<<"\t x= "<< x<<"\t "<<"y= "<<y<<"i"<<endl;
            }
};

complex operator+(complex ob1,complex ob2)
{
            complex temp;
            temp.x=ob1.x+ob2.x;
            temp.y=ob1.y+ob2.y;
            return temp;
}
complex operator-(complex ob1,complex ob2)
{
            complex temp;
            temp.x=ob1.x-ob2.x;
            temp.y=ob1.y-ob2.y;
            return temp;
}
complex operator*(complex ob1,complex ob2)
{
            complex temp;
            temp.x=ob1.x*ob2.x;
            temp.y=ob1.y*ob2.y;
            return temp;
}
main()
{
            float r,img,r1,img1;
            cout<<"Enter 1st real no : ";
            cin>>r;
            cout<<"Enter 1st imaginary no : ";
            cin>>img;
            cout<<"Enter 2nd real no : ";
            cin>>r1;
            cout<<"Enter 2nd imaginary no : ";
            cin>>img1;

            complex c1,c2,c3,c4,c5;
            c1=complex(r,img);
            c2=complex(r1,img1);
            c3=c1+c2;
            c4=c1-c2;
            c5=c1*c2;
            cout<<"c1 = ";
            c1.display();
            cout<<"c2 = ";
            c2.display();
            cout<<"c1+c2 = ";
            c3.display();
            cout<<"c1-c2 = ";
            c4.display();
            cout<<"c1*c2 = ";
            c5.display();
}
