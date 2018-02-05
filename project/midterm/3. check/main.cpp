/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chenl
 *
 * Created on 2018年1月27日, 下午7:36
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short num;
    unsigned char n1000s,n100s,n10s,n1s;
    
    //Initialize Variables
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>num;
    
    //Process/Map inputs to outputs
    n1000s=(num-num%1000)/1000;
    num%=1000;
    n100s=(num-num%100)/100;
    num%=100;
    n10s=(num-num%10)/10;
    num%=10;
    n1s=num;
    
    if(num>0 && num<3001)
    {
    //Display the 1000's place
    switch(n1000s){
        case 3:cout<<"Three Thousand ";break;
        case 2:cout<<"Two Thousand ";break;
        case 1:cout<<"One Thousand ";break;
    }
    
    //Display the 100's place
    switch(n100s){
        case 9:cout<<"Nine Hundred " ;break;
        case 8:cout<<"Eight Hundred ";break;
        case 7:cout<<"Seven Hundred ";break;
        case 6:cout<<"Six Hundred ";break;
        case 5:cout<<"Five Hundred ";break;
        case 4:cout<<"Four Hundred ";break;
        case 3:cout<<"Three Hundred ";break;
        case 2:cout<<"Two Hundred ";break;
        case 1:cout<<"One Hundred ";break;
    }
    //Display the 100's place
        if(n10s!=1){
            switch(n10s){
        case 9:cout<<"Ninety ";break;
        case 8:cout<<"Eighty ";break;
        case 7:cout<<"Seventy ";break;
        case 6:cout<<"Sixty ";break;
        case 5:cout<<"Fifty ";break;
        case 4:cout<<"Fourty ";break;
        case 3:cout<<"Thirty ";break;
        case 2:cout<<"Twenty ";break;
        case 1:cout<<"Ten ";break;
    }
    
    //Display the 1's place
    switch(n1s){
        case 9:cout<<"Nine";break;
        case 8:cout<<"Eight";break;
        case 7:cout<<"Seven";break;
        case 6:cout<<"Six";break;
        case 5:cout<<"Five";break;
        case 4:cout<<"Four";break;
        case 3:cout<<"Three";break;
        case 2:cout<<"Two";break;
        case 1:cout<<"One";break;
    }
    }
        else if(n10s=1&&n1s!=0)
        {   
            switch(n1s){
                case 9:cout<<"Nineteen";break;
                case 8:cout<<"Eighteen";break;
                case 7:cout<<"Seventeen";break;
                case 6:cout<<"Sixteen";break;
                case 5:cout<<"Fifteen";break;
                case 4:cout<<"fourteen";break;
                case 3:cout<<"Thirteen";break;
                case 2:cout<<"Twelve";break;
                case 1:cout<<"Eleven";break;
            }
        }
    }
    
    //Output the check value
    
    cout<<" and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}
