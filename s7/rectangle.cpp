  Slip no : 7_2,8_2,17_2

   Write the definition for a class called Rectangle that has floating point data Members length and
   width. The class has the following member functions:
   a) void setlength(float) to set the length of data member                                     [2]
   b) void setwidth(float) to set the width of data member                            [2]
   c) float perimeter() to calculate and return the perimeter of the rectangle         [2]
   d) float area() to calculate and return the area of the rectangle              [2]
   e) void show() to display the length and width of the rectangle                [2]
   f) Overload compare() to
   compare two rectangles by length and width                                             [7]
   compare two rectangles by area                                                                [8]
   Write main function to create two rectangle objects and display each rectangle and its area and
   perimeter.                                                                                                    [5]


#include<iostream>
using namespace std;
class Rectangle
{
            float l,w;
            public :           
            void setlength(float len)
            {
                        l=len;
            }
            void setwidth(float width)
            {
                        w=width;
            }
            float area()
            {
                        return l*w;
            }
            float perimeter()
            {
                        return (2*(l+w));
            }

            void show()
            {
                        cout<<"\n length "<<l;
                        cout<<"\n breath "<<w;
            }
            void compare(Rectangle ob)
            {
                        if(l>ob.l)
                                    cout<<"\n first rectangle have maximum length ";
                        else cout<<"\n 2nd rectangle have maximum length ";
                        if(w>ob.w)
                                    cout<<"\n first rectangle have maximum width ";
                        else cout<<"\n 2nd rectangle have maximum width ";
            }
            void compare(float a1,float a2)
            {
                        if(a1>a1)
                                    cout<<"\n First rectanle area is greather thean 2nd";
                        else
                                    cout<<"\n 2nd rectanle area is greather thean first";
            }
};

main()
{
            Rectangle ob1,ob2;
            float l1,l2,w1,w2;
            cout<<"\n Enter length and width of first rectangle";
            cin>>l1>>w1;
            cout<<"\n Enter length and width of second rectangle";
            cin>>l2>>w2;
            ob1.setlength(l1);
            ob1.setwidth(w1);
            ob2.setlength(l2);
            ob2.setwidth(w2);
            cout<<"\n Perimeter of 1st rectangle is "<<ob1.perimeter();
            cout<<"\n Perimeter of 2nd rectangle is "<<ob2.perimeter();
            float area1,area2;
            area1=ob1.area();
            cout<<"\n Area of 1st rectangle is "<<area1;
            area2=ob2.area();
            cout<<"\n Area of 2nd rectangle is "<<area2;
            ob1.compare(ob2);
            ob1.compare(area1,area2);
}
