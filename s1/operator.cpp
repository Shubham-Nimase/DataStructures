 1. Define a class Message with two data members one character pointer and an integer storing length.
   Implement following functions:
   a) Default constructor and Parameterized constructor                                                     [2+3]
   b) Overload binary + operator to represent concatenation of messages                           [7]
   c) Overload [] operator to return a character at a specific position                                   [8]
   d) Overload = operator to copy one Message object to another.                                                   [5]
   Write a main function that uses the above class and its member functions.                      [5]


#include<iostream>
#include<string.h>
using namespace std;

class String
{
            char *str;
            int len;
            public :
            String()
            {}
            String(char nm[])
            {
                        len=strlen(nm);
                        str=new char[len+1];
                        strcpy(str,nm);

            }
            void display()
            {
                        cout<<"String = "<<str<<endl;
            }
            String operator+(String ob)
            {
                        String temp;
                        temp.len=len+ob.len;
                        temp.str = new char[temp.len+1];
                        strcpy(temp.str,str);
                        strcat(temp.str,ob.str);
                        return temp;
            }

            char operator[](int &index)
            {
                        if(index>=0 && index<len)
                                    return str[index];
                        else
                                    return '_';
            }

            void operator=(String ob)
            {
                        len=ob.len;
                        str= new char[len+1];
                        strcpy(str,ob.str);
            }

};

main()
{
            char s1[20],s2[30];
            cout<<"Enter 1st string : ";        
            cin>>s1;
            cout<<"Enter 2nd string : ";
            cin>>s2;
            String ob1(s1),ob2(s2);
            cout<<"1st string is ";
            ob1.display();
            cout<<"2nd string is ";
            ob2.display();

            cout<<"After concatinated String : ";
            String ob3;
            ob3=ob1+ob2;
            ob3.display();

            cout<<"Enter index to be search in 1st String : ";
            int i;
            cin>>i;
            char ans=ob1[i];
            if(ans!='_')
                        cout<<"Given index charcater is : "<<ans<<endl;
            else
                        cout<<"Enter valid index"<<endl;

            cout<<"Enter String to be copy :";
            cin>>s2;
            String ob4(s2);
            ob1=ob4;
            ob1.display();
}

