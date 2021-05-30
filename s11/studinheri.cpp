 Slip no : 4_1, 10_2,11_1

Implement the following class hierarchy:
Student: id, name,
StudentExam (derived from Student): with n subjects (n can be variable)
StudentResult (derived from StudentExam): with percentage, grade
Define a parameterized constructor for each class and appropriate functions to accept and display details. Create n objects of the StudentResult class and display the marklist using suitable manipulators.
a) Parameterized constructor, accept and display for each class-each function carries 2 marks                                                                                                                                        [18]
b) Display marklist with Use of manipulators                                                                         [7]
Write main function that uses the above class and its member functions.                [5]


#include<iostream>
#include<string.h>

using namespace std;
class Student
{
            protected: int rno;
            char name[20];
            public:
            Student(int r, char name1[])
            {
                        rno=r;
                        strcpy(name,name1);
            }
             
            void display()
            {
                        cout<<"\n Rno :  "<<rno;
                        cout<<"\t Name :  "<<name;
            }
};
class StudentExam : public Student
{
            protected : int *ptr;
            int no;
            public :
            StudentExam(int r,char nm[],int n):Student(r,nm)
            {
                        no=n;
                        ptr = new int[no];
            }

            void accept()
            {
                        for(int i=0;i<no;i++)
                   {    cout<<"\n Enter marks ";
                                    cin>>ptr[i];
                        }
            }
            void display()
            {           cout<<"\n========== Markslist============ \n ";
                        for(int i=0;i<no;i++)
                        cout<<"subject"<<i<<" : "<<ptr[i]<<"\n";
            }

};
class StudentResult :public StudentExam
{      
            float per;char grade;
            public :
            StudentResult(int r,char nm[],int no):StudentExam(r,nm,no)
            {
            }
            void cal()
            {
                        int t=0;
                        for(int i=0;i<no;i++)
                        {           t=t+ptr[i];
                        }
                        per=t/no;
                        if(per>70)
                        grade ='A';
                        else if(per>=60 && per<70)
                        grade ='B';
                        else if(per>=50 && per<60)
                        grade='C';
                        else if(per>=40 && per<50)
                        grade ='D';
                        else grade ='E';
                        Student::display();      
                        StudentExam::display();
                        cout<<"======================================================";
                        cout<<"\n Percentage = "<<per<<"%";
                        cout<<"\n Grade = "<<grade<<endl;
            }


};

main()
{
            int no,s;char name[20];
            cout<<"\n enter roll no ";
            cin>>no;
            cout<<"\n Enter name :";
            cin>>name;
            cout<<"\n Enter no of subject :";
            cin>>s;
            StudentResult ob(no,name,s);
            ob.accept();
            cout<<"\n MARLKIST IS \n ";
            ob.cal();
}

Email This