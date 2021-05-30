  Slip no : 4_2,8_1,13_2,26_1

   Define a class named Clock with three integer data members for hours, minutes and seconds.
   Define parameterized and default constructors. Overload increment and decrement operators
   appropriately. Overload extraction and insertion operators.
   a) Default constructor and Parameterized constructor [2+3]
   b) Overloading of each operator carries 5 marks [20]
   Write a main function that uses the above class and its member functions. [5]


#include<iostream>
using namespace std;

class Clock
{
            int hh,mm,ss;
            public:
            Clock(){}
            Clock(int h,int m,int s)
            {
                        hh=h;
                        mm=m;
                        ss=s;
            }
            Clock operator++()
            {
                        ++ss;
                        if(ss>=60)
                        {           ss=ss-60;
                                    ++mm;
                                    if(mm>=60)
                                    {
                                                mm=mm-60;
                                                ++hh;

                                    }
                        }
                        return *this;
            }
            Clock operator--()
            {
                        if(ss==0)
                        {           ss=59;
                                    if(mm>0)
                                    {           --mm;
                                    }

                                    if(mm==0)
                                    {           --hh;
                                                mm=59;
                                    }
                        }
                        else if(ss>0)
                        {           --ss;
                        }
                        return *this;
            }          
            friend istream& operator>>(istream&,Clock&);
            friend ostream& operator<<(ostream&,const Clock&);
};
istream& operator>>(istream& in,Clock& t)
{
            cout<<"\n Enter hr :";
            in>>t.hh;
            cout<<"\n Enter min : ";
            in>>t.mm;
            cout<<"\n Enter sec : ";
            in>>t.ss;

            return in;
}
ostream& operator<<(ostream& out,const Clock& t)
{
            out<<t.hh<<":"<<t.mm<<":"<<t.ss;
            return out;
}

main()
{
            Clock t,t1,t2;
            cin>>t; //accept time
            t1=t;

            t2=++t;
            cout<<"After One Second :\n";
            cout<<t2<<"\n";     
            cout<<"Before One Second : \n";
            t2=--t1;
            cout<<t2<<"\n";

            Clock t3(1,3,9);
            cout<<"second time : "<<t3;
            t2=++t3;
            cout<<"\n After increment second time :";
            cout<<t2<<endl;
}
