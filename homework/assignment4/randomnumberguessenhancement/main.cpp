/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: number game
 * Created on 2018/1/19, PM12:25
 */

#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {

    unsigned seed = time(0);
    srand(seed);
    char ch,entry;
    int number, guess, time;
    
    cout<<"Press entry to generate the number."<<endl;
    cin.get(ch);
    
    number = rand()%9999;//adjust your value here 
    time = 0;
    do
    {
        cout<<"Please enter your guess."<<endl;
        cin >>guess;
        if(guess > number)
        {
            cout<<"Too high, try again."<<endl;
        }
        else(guess < number);
        {
            cout<<"Too low, try again."<<endl;
        }
        time++;
        cout <<"This is your "<<time<<" tries."<<endl;
        
    } while (guess != number);
    cout<<"Congratulation! You get the number finally."<<endl
            <<"The number is "<<number<<endl;
    return 0;
}

