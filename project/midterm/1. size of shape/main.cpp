/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: size of shape
 * Created on 2018年1月27日, 下午1:35
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    unsigned short num;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>num>>shape;
    int y =1;
    //Draw the shape
    if(num>=1&&num<=50)
    {switch(shape)
    {
        case 'f':{
            int A=1;
        if((static_cast<float>(num)/2)-num/2==0){
        {for(int a=num;a>0;a--)
            cout<<setw(a)<<a<<endl;
        }
        }
            else{
                for(int a=num; a>0;a--){
                    cout<<setw(a)<<A++<<endl;
                }
            }
        break;}
        case 'b':{
            int A=1;
            if((static_cast<float>(num)/2)-num/2>0){
            for(int b=num;b>0;b--)
                cout<<setw(y++)<<b<<endl;
            }
            else{
                for(int b=num;b>0;b--){
                    cout<<setw(y++)<<A++<<endl;
            }
            }
            break;}
        case 'x':{
            int w =num+1;
            int z=0;
        if((static_cast<float>(num)/2)-num/2>0)
        {
        for(int c=1;c<=num;c++){
            z++;
            w--;
            for(int d=1;d<=num;d++)
            {
                if(c==d)
                    cout<<w;
                else if(d==(num+1)-c)
                    cout<<z;
                else
                    cout<<" ";
            }cout<<endl;
        }
        }
        else
            {
                for(int c=1;c<=num;c++){
            z++;
            w--;
            for(int d=1;d<=num;d++)
            {
                if(c==d)
                    cout<<z;
                else if(d==(num+1)-c)
                    cout<<w;
                else
                    cout<<" ";
            }cout<<endl;
            }
}
    }
    }
    }
    if(num>50||num<1)
        cout<<"please restart the program to input the correct vavlue."<<endl;
    return 0;
}

