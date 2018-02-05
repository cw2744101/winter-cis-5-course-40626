/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: fat calculator
 * Created on 2018/1/17, PM10:29
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    float fat,calory;
    double percentage,caloryff;//calory from fat
    const int rate = 9; //9 calories per fat gram
    
    cout <<"Please enter the total calories and fat gram the food contents:"
            <<endl;
    cin >>calory>>fat;
    if (calory >= 0 && fat >= 0)
    {
        caloryff = fat * rate;
        percentage = caloryff / calory;
        if (percentage < 0.3)
            cout <<"This food is low in calories."<<endl;
        else if (percentage >= 1)
            cout <<"The value of calories is not inputed correctly."<<endl;
        else
            cout <<"This is not a low calory food."<<endl;
    }
    else
        cout <<"The value of fat or calories is not entered correctly."<<endl;
    
    return 0;
}

