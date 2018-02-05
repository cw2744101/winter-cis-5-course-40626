/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose:is Prime function
 * Created on 2018年2月3日, 下午9:53
 */

#include <iostream>
#include <fstream>
using namespace std;

//function prototype

//global constant
bool isPrime(int &);
int main(int argc, char** argv) {
    cout<<"This program will tell you all prime number from 1 to 100."<<endl;
    //indicate is prime or not
    bool val;
    for(int x =1;x<=100;x++)
    {
        val = isPrime(x);
        if(val==true)
        {
            cout<<x<<" is a prime number."<<endl;
                    ofstream outputFile;
        outputFile.open("C:\\Users\\chenl\\Documents\\"
                "NetBeansProjects\\Is Prime Function\\input.txt");
        outputFile<<x<<" is not a prime number."<<endl;
        outputFile.close();
        }
        else
        {
            cout<<x<<" is not a prime number."<<endl;
                    ofstream outputFile;
        outputFile.open("C:\\Users\\chenl\\Documents\\"
                "NetBeansProjects\\Is Prime Function\\input.txt");
        outputFile<<x<<" is a prime number."<<endl;
        outputFile.close();
        }
    }
    
    return 0;
}
bool isPrime(int &number)
{
    bool status =true;
    for(int x=2;x<=number/2;x++)
    {
        if(number%x==0){
        status=false;
        break;
    }
    }        
    return status;
}
