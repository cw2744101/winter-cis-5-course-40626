/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chenl
 *
 * Created on 2018年2月4日, 下午9:21
 */

#include <iostream>
#include <string>
using namespace std;
//global constant
const int NUM_NAME=20;
//function prototype
void sort(string [],int);
int search(string [],int,string);
int main(int argc, char** argv) {
    int result;
    string target;
    string names[NUM_NAME]={"Collins,Bill","Smith,Bart","Allen,Jim","Griffin,Jim"
    ,"Stamey,Marty","Rose,Geri","Taylor,Terri","Johnson,Jill","Allison,Jeff",
    "Looney,Joe","Wolfe,Bill","James,Jean","Weaver,Jim","Pore,Bob","Rutherford,Greg"
    ,"Javens,Renee","Harrison,Rose","Setzer,Cathy","Pike,Gordon","Holland,Beth"};
    sort(names, NUM_NAME);
    cout<<"Please enter the name you want to search."<<endl;
    cin>>target;
    result=search(names, NUM_NAME, target);
    if(result=-1)
    {
        cout<<"The name is not found on the list."<<endl;
    }
    else
    {
        cout<<"The name is on #"<<result+1<<endl;
    }
    
    return 0;
}
void sort(string name[],int size)
{
    int start, minIndex;
    string minValue;
    for(start=0;start<(size-1);start++)
    {
        minIndex=start;
        minValue=name[start];
        for(int index = start+1;index <size;index++)
        {
            if(name[index]<minValue)
            {
                minValue=name[index];
                minIndex=index;
            }
        }
        name[minIndex]=name[start];
        name[start]=minValue;
    }
}
int search(string name[],int size, string value)
{
    int first=0;
    int last=size-1;
    int middle;
    int position= -1;
    bool found=false;
    
    while(!found&&first<=last)
    {
        middle=(first+last)/2;
        if(name[middle]==value)
        {
            found =true;
            position=middle;
        }
        else if(name[middle]>value)
        {
            last=middle-1;
        }
        else{
            first=middle+1;
        }
    }
    return position;
}