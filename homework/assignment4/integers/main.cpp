/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: the largest and least number
 * Created on 2018/1/22, PM12:11
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int num;
    int integer,
            largest,
            least;
    
    cout<<"Please enter a series of integer to this program."<<endl
            <<"If you decide not to input any number any more, enter -99."
            <<endl;
    num = 0;
    do
    {
        num++;
        cout<<"Please enter your "<<num<< " integer below;"<<endl;
        cin>>integer;
        if(num ==1)
        {
            largest = integer;
            least = integer;
        }
        else
        {
            if(largest >integer&&integer !=-99)
                largest = integer;
            else if(least <integer&&integer !=-99)
                least = integer;
        }
    }while(integer != -99);
    cout<<"The largest number is "<<largest<<endl;
    cout<<"The least number is "<<least<<endl;
    return 0;
}

