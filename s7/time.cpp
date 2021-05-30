 Slip no: 7_1,17_1,18_2

Write the definition for a class called "time" that has hours, minutes & seconds as integer data members. Consider 24 hr format. The class has the following member functions:
a) void settime(int, int, int) to set the specified values of hours, minutes and seconds in object . [5]
b) void showtime() to display contents of time object. [5]
c) time add(time) add the corresponding values of hours, minutes and seconds (<60) in time object
argument to current time object and make appropriate conversions and return time. [8]
d) time diff(time) subtract values of hours, minutes and seconds in time object argument from current
time object after making appropriate conversions and return time difference. [8]
Write a main program to illustrate the use of above class and member function. [4]


#include<iostream>
using namespace std;
class time1
{
            int hr,min,sec;
            public:
            void settime(int x,int y,int z)
            {           hr=x;
                        min=y;
                        sec=z;
            }

            void showtime()
            {           cout<<"\n"<<hr<<":"<<min<<":"<<sec<<endl;
            }

            time1 add(time1 ob)
            {
                        time1 temp;
                        temp.sec=sec+ob.sec;
                        temp.min=temp.sec/60;
                        temp.sec=temp.sec%60;
                         
                        temp.min=temp.min+min+ob.min;
                        temp.hr=temp.min/60;
                        temp.min=temp.min%60;

                        temp.hr=temp.hr+hr+ob.hr;
                        return temp;
            }
            time1 diff(time1 ob)
            {
                        time1 temp;
                        if(sec<ob.sec)
                        {
                                    temp.sec=sec-ob.sec+60;
                                    min=min-1;
                        }
                        else
                                    temp.sec=sec-ob.sec;
                        if(min<ob.min)
                        {
                                    temp.min=min-ob.min+60;
                                    hr=hr-1;
                        }
                        else
                                    temp.min=min-ob.min;
                        if(hr<ob.hr)
                        {
                                    temp.hr =hr+ob.hr+24;
                        }
                        else
                                    temp.hr=hr-ob.hr;
                        return temp;
            }
             
};

main()
{
            int h,m,s;
            cout<<"\n Enter hr:\t";
            cin>>h;
            cout<<"\n Enter min:\t";
            cin>>m;
            cout<<"\n Enter sec:\t";
            cin>>s;
            time1 t1;        
            t1.settime(h,m,s);
            t1.showtime();
            time1 t2;
            cout<<"\n Enter hr:\t";
            cin>>h;
            cout<<"\n Enter min:\t";
            cin>>m;
            cout<<"\n Enter sec:\t";
            cin>>s;
             
            t2.settime(h,m,s);
            t2.showtime();
             
            time1 t3;
            cout<<"\n Addition of 2 times : ";
            t3=t1.add(t2);
            t3.showtime();
                         
            cout<<"\n Difference between 2 times : "; 
            t3=t1.diff(t2);
            t3.showtime();
}