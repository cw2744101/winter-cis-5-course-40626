/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: student line up
 * Created on 2018/1/22, AM11:38
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    int num;
    string studentName,
            first,
            last;
    
    cout<<"Please enter how many students are in your class.The number must be"
            <<"between 1 to 25."<<endl;
    cin>>num;
    while(num<1 ||num>25)
        cout<<"Please enter the valid number for student."<<endl;
    for(int x = 1; x <= num; x++)
    {
        cout<<"Please enter the name of student #"<<x<<":"<<endl;
        cin>>studentName;
        if(x == 1)
        {
            first = studentName;
            last = studentName;
        }
        else
        {
            if(first < studentName)
                first = studentName;
            else if(last > studentName)
                last = studentName;
        }
    }
    
    cout<<"The name of first student is "<<first<<endl;
    cout<<"The name of last student is "<<last<<endl;
    return 0;
}

