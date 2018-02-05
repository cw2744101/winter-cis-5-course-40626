/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chenl
 *
 * Created on 2018年1月27日, 下午2:37
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {

    //Declare all Variables Here

    char num[4];
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>num;
    //Histogram Here
    for(int x=3;x>=0;x--)
    {
        if(isdigit(num[x]))
        {
           cout<<num[x]<<" ";
           int n=num[x]-'0';
           while(n>0)
           {
               n--;
               cout<<"*";
           }
           cout<<endl;
       }
       else
       {
           cout<<num[x]<<" ?"<<endl;
       }
   }

    //Exit
    return 0;
}