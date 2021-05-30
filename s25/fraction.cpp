 Slip no : 20_1,25_2

Define a class "Fraction" having integer data members numerator and denominator. Define
parameterized and default constructors (default values 0 and 1). Parameterized constructor should store the fraction in reduced form after dividing both numerator and denominator by gcd(greatest common divisor). Write a private function member to compute gcd of two integers. Write four member functions for addition, subtraction. multiplication and division of fraction objects. Each function will have two fraction objects as arguments.
a) gcd() function                                                                                                                     [3]
b) Default constructor and Parameterized constructor                                                     [1+4=5]
c) Addition, Subtraction and Division function - each carries 5 marks                                  [15]
d) Multiplication() function                                                                                                    [2]
Write the main function to illustrate the use of the class and member function.                [5]


#include<iostream>
using namespace std;
class Fraction
{
            int n,d;
            int gcd(int x,int y)
            {
                        if(y==0)
                                    return x;
                        else
                                    return(x,gcd(y,x%y));
            }
            public:
            Fraction()
            {           n=0;
                        d=1;
            }
            Fraction(int x,int y)
            {
                        n=x/gcd(x,y);
                        d=y/gcd(x,y);
            }
            void display()
            {
                        cout<<n<<"/"<<d;
            }
            void add(Fraction f1,Fraction f2)
            {          
                        if(f1.d==f2.d)
                        {           n=f1.n+f2.n;
                                    d=f1.d;            
                        }
                        else
                        {
                                    n=(f1.n*f2.d)+(f1.d*f2.n);
                                    d=f1.d*f2.d;
                        }
                         
            }
            void sub(Fraction f1,Fraction f2)
            {
                         
                        if(f1.d==f2.d)
                        {           n=f1.n-f2.n;
                                    d=f1.d;            
                        }
                        else
                        {
                                    n=(f1.n*f2.d)-(f1.d*f2.n);
                                    d=f1.d*f2.d;
                        }
                         
            }
            void mul(Fraction f1,Fraction f2)
            {
                        n=f1.n*f2.n;
                        d=f1.d*f2.d;
            }

            void div(Fraction f1,Fraction f2)
            {           n=f1.n*f2.d;
                        d=f1.d*f2.n;
                         
            }
};



main()
{
            int n1,d1,n2,d2;
            cout<<"Enter 1st numerator : ";
            cin>>n1;
            cout<<"Enter 1st Denominator : ";
            cin>>d1;
             
            cout<<"Enter 1st numerator : ";
            cin>>n2;
            cout<<"Enter 1st Denominator : ";
            cin>>d2;

            Fraction f1(n1,d1),f2(n2,d2),f3;
            cout<<"\n f1 = ";
            f1.display();
            cout<<"\n f2 = ";
            f2.display();
            cout<<"\n f1+f2 = ";
            f3.add(f1,f2);
            f3.display();
            cout<<"\n f1-f2 = ";
            f3.sub(f1,f2);
            f3.display();
            cout<<"\n f1*f2 = ";
            f3.mul(f1,f2);
            f3.display();
            cout<<"\n f1/f2 = ";
            f3.div(f1,f2);
            f3.display();
}
