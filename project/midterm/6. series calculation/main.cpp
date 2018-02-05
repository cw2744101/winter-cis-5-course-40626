/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx,term;
    int nterms,fact;
    int sign =-1;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    nterms*=2;
    fx=0;
    if(nterms>0){
    for(int n=1;n<nterms;n+=2){
        fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;}
        sign=-1*sign;
        fx+=pow(x,n)/fact*sign;}
    }
    
    //Output the result here
    if(fx!=0){
    cout<<fixed<<setprecision(6)<<fx;}
    else{
        cout<<fx;
    }
    
    //Exit
    return 0;
}
