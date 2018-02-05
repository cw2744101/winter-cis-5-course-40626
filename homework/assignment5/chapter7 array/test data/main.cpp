/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: test data
 * Created on 2018年2月4日, 下午1:52
 */

#include <iostream>

using namespace std;
//global constant
const int col = 3;
const int row = 4;
//function prototype
int getTotal(int deck[row][col]);
float getAverage(int deck[row][col]);
int getRowtotal(int deck[row][col], int rowNum);
int getColumntotal(int deck[row][col], int colNum);
int getHighestInRow(int deck[row][col], int rowNum);
int getLowestInRow(int deck[row][col], int rowNum);
int main(int argc, char** argv) {
    int deck[row][col]={{2,4,6},{1,3,5},{3,6,9},{0,4,8}};
    int total;
    float average;
    int rowTotal;
    int columnTotal;
    int highest;
    int lowest;
    int rowNum;
    int colNum;
    
    cout<<"Input the column and row number you want for special calculation."
            <<endl;
    cin>>colNum>>rowNum;
    
    total=getTotal(deck);
    average=getAverage(deck);
    rowTotal=getRowtotal(deck,rowNum);
    columnTotal=getColumntotal(deck,colNum);
    highest=getHighestInRow(deck,rowNum);
    lowest=getLowestInRow(deck,rowNum);
    
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<average<<endl;
    cout<<"Rowtotal for #"<<rowNum<<": "<<rowTotal<<endl;
    cout<<"Columntotal for #"<<colNum<<": "<<columnTotal<<endl;
    cout<<"Highest in row #"<<rowNum<<": "<<highest<<endl;
    cout<<"Lowest in row #"<<rowNum<<": "<<lowest<<endl;
    return 0;
}
int getTotal(int deck[row][col])
{
    int total =0;
    for(int x=0;x<row;x++)
    {
        for(int y=0;y<col;y++)
        {
            total += deck[x][y];
        }
    }
    return total;
}
float getAverage(int deck[row][col])
{
    float average;
    int total;
    for(int x=0;x<row;x++)
    {
        for(int y=0;y<col;y++)
        {
            total += deck[x][y];
        }
    }
    average=total/(row*col);
    return average;
}
int getRowtotal(int deck[row][col], int rowNum)
{
    int rowTotal;
    for(int y=0;y<col;y++){
        rowTotal += deck[rowNum-1][y];}
    return rowTotal;
}
int getColumntotal(int deck[row][col], int colNum)
{
    int colTotal;
    for(int x=0;x<row;x++)
    {
        colTotal += deck[x][colNum-1];
    }
    return colTotal;
}
int getHighestInRow(int deck[row][col], int rowNum)
{
    int highest;
    for(int y=0;y<col;y++)
    {
        highest=deck[rowNum-1][0];
        if(deck[rowNum-1][y]>highest&&y>0)
        {
            highest=deck[rowNum-1][y];
        }
    }
    return highest;
}
int getLowestInRow(int deck[row][col], int rowNum)
{
    int lowest;
    for(int y=0;y<col;y++)
    {
        lowest=deck[rowNum-1][0];
        if(deck[rowNum-1][y]<lowest)
        {
            lowest=deck[rowNum-1][y];
        }
    }
    return lowest;
}
