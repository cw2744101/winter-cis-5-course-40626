/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: tic tac toe
 * Created on 2018年2月4日, 下午3:15
 */

#include <iostream>

using namespace std;   

//global constant
const int row=3;
const int col=3;

//function prototype
void turn1(char board[row][col]);
bool turn2(char board[row][col]);
int main(int argc, char** argv) {
char board[row][col]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
bool test;
cout<<"TIC TAC TOE GAME STAT!"<<endl;
    turn1(board);
    test=turn2(board);
    if(test==false)
    {
        cout<<"DRAW!"<<endl;
    }
    
    return 0;
}
void turn1(char board[row][col])
{
    for(int c=1;c<=9;c++){
    int a,b;//new col and row
    for(int x=0;x<row;x++)
    {
        for(int y=0;y<col;y++)
        {
            cout<<board[x][y];
        }
        cout<<endl;
    }
    if(c%2>0){
    cout<<"Player one's turn. Please enter the row and column where you want to"
            " put a X."<<endl;
    cin>>a>>b;
    board[a-1][b-1]= 'X';}
    else{
    cout<<"Player two's turn. Please enter the row and column where you want to"
            " put a O."<<endl;
    cin>>a>>b;
    board[a-1][b-1]= 'O'; 
    }
}
}
bool turn2(char board[row][col])
{
    bool status =false;
    int counter,counterv;
    for(int x=0;x<row;x++)
    {
        for(int y=0;y<=col;y++)
        {
            if(board[x][y]=='X')
                counter++;
            else if(board[x][y]=='O')
                counterv++;
        }
        if(counter == 3){
            cout<<"Player one win."<<endl;
            status=true;
        }
        else if(counterv==3){
            cout<<"player two win."<<endl;
            status=true;
        }
        counter=0;
        counterv=0;
    }
        for(int y=0;y<row;y++)
    {
        for(int x=0;x<=col;x++)
        {
            if(board[x][y]=='X')
                counter++;
            else if(board[x][y]=='O')
                counterv++;
        }
        if(counter == 3){
            cout<<"Player one win."<<endl;
            status=true;
        }
        else if(counterv==3){
            cout<<"player two win."<<endl;
            status=true;
        }
        counter=0;
        counterv=0;
    }
    if(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X')
    {
        cout<<"player one win."<<endl;
        status=true;
    }
    if(board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X'){
                cout<<"player one win."<<endl;
        status=true;
    }
    if(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O'){
        cout<<"Player two win."<<endl;
        status=true;
    }
    if(board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O'){
        cout<<"player two win."<<endl;
        status=true;
    }
    return status;
}