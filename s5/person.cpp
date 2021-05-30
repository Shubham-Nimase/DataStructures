  Slip no : 5_2

   Given the following inheritance hierarchy, implement each of the classes.
   The person class has parameterized constructor, accept and display functions. The employee id is auto generated from the last allotted value stored in employee class. Write constructors, accept and display functions for derived classes. Define member function computepay for employee and override appropriately in derived class. Write main program to illustrate use of the classes
   a) Parameterized constructor, accept and display for each class carries -(2+1+1) marks            [16]
   b) Computepay() for employee                                                                                           [1]
   c) Overriding of computepay() in derived classes-function in each class carries 4marks [8]
   Write a main function that uses the above class and its member functions.                     [5]


#include<string.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class person
{
            protected:
                        char fname[20],lname[20];
            public :
                        person(){}
                        person(char fn[],char ln[])
                        {
                                    strcpy(fname,fn);
                                    strcpy(lname,ln);
                        }
                        void accept()
                        {
                                    cout<<"\n Enter first name :";
                                    cin>>fname;
                                    cout<<"\n Enter last name:";
                                    cin>>lname;
                        }

                        void display()
                        {
                                    cout<<"\n First name : "<<fname<<endl<<" Last name : "<<lname;
                        }
};
class employee : public person
{
            protected:
                        int id;char dt[20];
            public:
                        employee(){}
                        employee        (char fn[],char ln[],char d[]):person(fn,ln)
            {
                        id=rand()%100;
                        strcpy(dt,d);
            }
                        void accept()
                        {           person::accept();        
                                    id=rand()%100;;
                                    cout<<"\n Enter joining date : ";
                                    cin>>dt;
                        }

                        void display()
                        {           person::display();       
                                    cout<<"\n ID = "<<id<<"\n joining Date = "<<dt;
                        }
};

class PartTime : public employee
{       public :
            float h,r;
            public:
            PartTime(){}
            PartTime(char fn[],char ln[],char dt[],float hr,float r1):employee(fn,ln,dt)
            {           h=hr;
                        r=r1;
            }
            void accept()
            {
                        employee::accept();
                        cout<<"\n Enter worked hours : ";
                        cin>>h;
                        cout<<"\n Enter rate for hours : ";
                        cin>>r;
            }

            void display()
            {           employee::display();
                        cout<<"\n No of hours = "<<h<<"\n Rate ="<<r;
            }
            void computepay()
            {
                        cout<<"\n Total payment = "<<h*r;
            }
};
class FullTime : public employee
{       public :
            float sal,bonus;
            public:
            FullTime(){}
            FullTime(char fn[],char ln[],char dt[],float s,float b):employee(fn,ln,dt)
            {           sal=s;
                        bonus=b;
            }
            void accept()
            {
                        employee::accept();
                        cout<<"\n Enter Salary : ";
                        cin>>sal;
                        cout<<"\n Enter bonus : ";
                        cin>>bonus;
            }

            void display()
            {          
                        employee::display();
                        cout<<"\n salary = "<<sal<<"\n Bonus =  "<<bonus;
            }
            void computepay()
            {
                        cout<<"\n Total payment = "<<sal+bonus;
            }
};

main()
{
            int n,n1,i;
            FullTime e1("Neha","Bhutkar","12-12-2015",15000.00f,2000.00f);

            cout<<"Information of Full Time Employee : "<<endl;
            e1.display();
            e1.computepay();

            PartTime p("ABC","PQR","12-2-2014",20,50);

            cout<<"\n Information of Part Time Employee : "<<endl;
            p.display();
            p.computepay();

            cout<<"\n Enter no of Full Time employee : ";
            cin>>n;
            FullTime ft[5];
            for(i=0;i<n;i++)
                        ft[i].accept();

            cout<<"\n Enter no of Part Time employee : ";
            cin>>n1;
            PartTime pt[5];
            for(i=0;i<n;i++)
                        pt[i].accept();

            cout<<"\n ============================================================";
            cout<<"\n Full Time Employees are : ";
            for(i=0;i<n;i++)
            {           ft[i].display();
                        ft[i].computepay();
            }          
            cout<<"\n ============================================================";
            cout<<"\n Part Time Employees are : ";
            for(i=0;i<n1;i++)
            {           pt[i].display();
                        pt[i].computepay();
            }
}
