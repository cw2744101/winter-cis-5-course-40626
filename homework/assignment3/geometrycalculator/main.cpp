/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose:geometry calculator
 * Created on 2018/1/17, PM7:22
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    char choice;
    const double PI = 3.1415926;
    double radius,areaCircle,areaRec,areaTri;
    float length,width,base,height;
    
    cout <<"Geometry Calculator" <<endl
            <<"\t 1. Calculating the Area of a Circle" <<endl
            <<"\t 2. Calculating the Area of a Rectangle" <<endl
            <<"\t 3. Calculating the Area of a Triangle" <<endl
            <<"\t 4. Quit" <<endl
            <<endl
            <<"\t Enter your choice (1-4):"<<endl;
    cin >>choice;
    
    switch (choice)
    {
        case '1' :
            cout <<"Please enter the radius of the circle:" <<endl;
            cin >> radius;
            areaCircle = PI * pow(radius,2);
            cout <<"The area of the circle is "<<fixed <<setprecision(2)
                    <<areaCircle<<endl;
            break;
        case '2':
            cout <<"Please enter the length and width of the rectangle"
                    <<endl;
            cin >>length>>width;
            areaRec = length * width;
            cout <<"The area of the rectangle is " <<fixed <<setprecision(2)
                    <<areaRec <<endl;
            break;
        case '3':
            cout <<"Please enter the base and height of the triangle"
                    <<endl;
            cin >>base>>height;
            areaTri = base * height /2;
            cout <<"The area of the triangle is " <<fixed <<setprecision(2)
                    <<areaTri <<endl;
            break;
        case '4':
            cout <<"Program END" <<endl;
    }
                
                
    
    return 0;
}

