/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: lottery stimulation
 * Created on 2018年2月4日, 下午5:19
 */

#include <iostream>
#include <ctime>
using namespace std;
//global constant
const int num =5;//for lottery
//function prototype
void userTurn(int user[num]);
void lotteryTurn(int lottery[num]);
/*
 * 
 */
int main(int argc, char** argv) {
    int lottery[num];
    int user[num];
    lotteryTurn(lottery);
    userTurn(user);
    //show the two number
    cout<<"The number of the lottery is ";
    for(int x=0; x<5;x++){
        cout<<lottery[x];
    }
    cout<<endl;
    cout<<"Your number is ";
    for(int x=0;x<5;x++){
        cout<<user[x];
    }
    cout<<endl;
    int counter;
    for(int x=0;x<5;x++){
        if(lottery[x]==user[x])
        {
            counter++;
        }
    }
    if(counter == 5)
    {
        cout<<"YOU WIN THE LOTTERY! YOU WILL GET A BIG AWARD!"<<endl;
    }
    else{
        cout<<"Sorry.Try next time."<<endl;
    }
    return 0;
}
void userTurn(int user[num])//ask user to input number
{
    int input;
    cout<<"This is a lottery stimulation."<<endl;
    cout<<"Please enter a 5 digit number below one by one."<<endl;
    for(int x=0;x<5;x++)
    {
        cin>>input;
        while(input<0 || input>9)
        {
            cout<<"Please enter a number that is between 0 and 9."<<endl;
            cin>>input;
        }
        if(input>0&&input<10){
        user[x]=input;}
    }
    
}
void lotteryTurn(int lottery[num])//generate lottery number
{
    srand(time(NULL));
    for(int x=0;x<5;x++)
    {
        lottery[x]=rand()%9;
    }
}
