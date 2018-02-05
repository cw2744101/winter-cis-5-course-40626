
/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: play the game Rock,Scissor and Paper
 * Created on 2018年2月3日, 下午6:32
 */

#include <iostream>
#include <ctime>
using namespace std;

   //Function Prototype 
void cpIntro(char &);//function of introduction
void cpTurn(string &);//function of computer's move
    //Global Constant

int main(int argc, char** argv) {
    //declare variable

    char selection;//player's turn
    string cpChoice;//computer's turn
    bool status;//to test draw
    
    //game start
    do{
    cpIntro(selection);
    cpTurn(cpChoice);

    
    //output computer's choice
    cout<<"The choice of computer is "<<cpChoice<<endl;
   
    switch(selection){
        case 'r':
        {
            if(cpChoice == "paper"){
                cout<<"Computer win.Try again."<<endl;
            }
            else if(cpChoice == "scissor"){
                cout<<"You win.Congratulation."<<endl;
            }
            else{
                status = false;
            }
            break;
        }
        case 's':
        {
            if(cpChoice == "rock"){
                cout<<"Computer win.Try again."<<endl;
            }
            else if(cpChoice == "paper"){
                cout<<"You win.Congratulation."<<endl;
            }
            else{
                status = false;
            }
            break;
        }
        case 'p':
        {
            if(cpChoice == "scissor"){
                cout<<"Computer win.Try again."<<endl;
            }
            else if(cpChoice == "rock"){
                cout<<"You win.Congratulation."<<endl;
            }
            else{
                status = false;
            }
        }
        break;
    }
    }while(status =false);
 
    return 0;
}
void cpIntro(char &choice)
{
    cout<<"Welcome to ROCK SCISSOR AND PAPER."<<endl;    
    cout<<"Please enter rock, scissor or paper below."<<endl;
    cout<<"Your opponent will be computer."<<endl;
    cin>>choice;
}
void cpTurn(string &choice)
{
    int cpNum;
    srand(time(NULL));
    cpNum =rand()%3+1;
    switch(cpNum)
    {
        case 1:choice = "rock";break;
        case 2:choice = "paper";break;
        case 3:choice = "scissor";break;
    }
  
}
