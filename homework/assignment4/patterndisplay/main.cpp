/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: pattern formation
 * Created on 2018/1/19, AM11:28
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    string pattern;
    const int MIN_NUMBER = 1,
            MAX_NUMBER = 10;
    int num;
    
    pattern = '+';
    
    for (num = MIN_NUMBER;num <= MAX_NUMBER; num++)
    {
        for (int a = 0; a < num; a++)
        {
            cout<<pattern;
        }
        cout<<endl;
    }
    cout<<endl;
    
    for (num = MAX_NUMBER;num >= MIN_NUMBER; num--)
    {
        for (int b = 0; b < num; b++)
        {
            cout<<pattern;
        }
        cout<<endl;
    }
    
    return 0;
}

