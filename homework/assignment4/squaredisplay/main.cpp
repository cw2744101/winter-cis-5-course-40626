/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose:square display
 * Created on 2018/1/19, PM11:52
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    string pattern;
    int number;
    
    pattern = 'X';
    
    cout <<"Please enter a value that is no larger than 15:"
            <<"It will be the length of a square."<<endl;
    cin>>number;
    
    if (number >0 && number <= 15)
    {
        for(int x = 1; x <= number; x++)
        {
            for(int y = 1; y <= number; y++)
                cout<<pattern;
            cout<<endl;
        }
    }
    else
        cout<<"please check the number your entered!"<<endl;
    
    cout<<"system pause"<<endl;
    return 0;
}

