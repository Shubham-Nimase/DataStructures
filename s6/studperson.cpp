 Slip no : 6_1 , 16_2

Implement the following class hierarchy
Define constructors and appropriate functions tom accept and display details.
Parameterized constructor, accept and display for each class carries-(2+2+2) marks [24]
Write main function to accept details of "n" Teaching-Assistants and display the details.                                                                                                  [6]

#include<iostream>
#include<string.h>

using namespace std;
class person
{
            char fname[20];
            char lname[20];
            public :
            person(){}
            person(char name[],char name1[])
            {
                        strcpy(fname,name);
                        strcpy(lname,name1);
            }

            void accept()
            {           cout<<"\n Enter first name :";
                        cin>>fname;
                        cout<<"\n Enter last name :";
                        cin>>lname;
                         
            }
            void display()
            {
                        cout<<"\n first name is : "<<fname<<"\n last name is :  "<<lname;
            }
};

class student :virtual public  person
{
            char course[20];
            public:
            student(){}
            student(char fname[],char lname[],char c[]):person(fname,lname)
            {
                        strcpy(course,c);
            }
            void accept()
            {           cout<<"\n Enter course name :";
                        cin>>course;
                         
            }
            void display()
            {           cout<<"\n course name is : "<<course;
            }
};
class Teacher:virtual public  person
{
            char dept[20];
            public:
            Teacher(){}
            Teacher(char fname[],char lname[],char d[]):person(fname,lname)
            {
                        strcpy(dept,d);
            }
            void accept()
            {           cout<<"\n Enter departement name :";
                        cin>>dept;
                         
            }
            void display()
            {          
                        cout<<"\n deptartment name is : "<<dept;
            }
};

class Teaching_Assistant:public student,public Teacher
{
            public:
            Teaching_Assistant(){}
            Teaching_Assistant(char fn[],char ln[],char co[],char de[]):student(fn,ln,co),Teacher(fn,ln,de),person(fn,ln)
            {
            }
            void accept()
            {           person::accept();
                        student::accept();
                        Teacher::accept();
             
            }
            void display()
            {
                        person::display();
                        student::display();
                        Teacher::display();
            }
};

main()
{
            Teaching_Assistant ob("Neha","Bhutkar","cpp","Bcs");
            ob.display();
            int n;
            cout<<"\n Enter no of Teaching - Assistant : ";
            cin>>n;
                         
            Teaching_Assistant t2[10];
            for(int i=0;i<n;i++)
            t2[i].accept();
             
            cout<<"\n Information is : \n";
            for(int i=0;i<n;i++)
            {t2[i].display();
            cout<<"\n===================================================================";
            }

}
