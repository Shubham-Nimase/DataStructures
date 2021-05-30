 slip no : 12_1
Write the definition for a class called “cuboidSolid” that has length, breadth, height and mass has float data members. The class has the following member functions.
   a) Accept() and Display() functions – each carries 5marks                                                [10]
   b) float getVolume() that returns the volume of the metal                                                [5]
   c) float getSurfaceArea() that returns the surface area                                                     [5]
   d) float getDensity() that returns the density                                                                      [5]
   Write a main program to illustrate the use of above class and member function.           [5]


#include<iostream>
using namespace std;
class cuboidsolid
{
            float l,b,h,m;
            public:
            void accept()
            {
                        cout<<"\n Enter the length ";
                        cin>>l;
                        cout<<"\n Enter the breadth ";
                        cin>>b;
                        cout<<"\n Enter the height ";
                        cin>>h;
                        cout<<"\n Enter the mass ";
                        cin>>m;
            }

            void display()
            {           cout<<"\n length = "<<l<<"\n breadth ="<<b;
                        cout<<"\n height = "<<h<<"\n Mass = "<<m;
            }
            float getVolume()
            {           return l*b*h;
            }

            float getsurfaceArea()
            {
                        return (2+(l*b)+(b*h)+(h*l));
            }

            float getDensity()
            {           float den;
                        den=m/getVolume();
                        return den;
            }

};
main()
{           cuboidsolid C;

            C.accept();
            C.display();
            cout<<"\n Volume = "<<C.getVolume();
            cout<<"\n Surface Area = "<<C.getsurfaceArea();
            cout<<"\n Density = "<<C.getDensity();;
}
