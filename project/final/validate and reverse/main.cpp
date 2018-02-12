/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Input something, output it reversed with some modifications
 * Note:Range should be 5 digits, 321 = 00321 reverse = 12300 before subtraction
 *      12300 - 999 = 11301 after subtraction
 *      12300 = 00321 = 321 after reversal and no subtraction
 */

//System Libraries Here
#include <iostream>//cin,cout,endl
#include <cstring> //strlen()
using namespace std;
//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, conversions, or the columns for 2-D arrays

//Function Prototypes Here
bool  inRange(char [],unsigned short &);//Output true,unsigned or false
bool  reverse(char[],signed short &);//Output true,short or false
short subtrct(signed short,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;     //More than enough
    char  digits[SIZE];    //Character digits or not
    unsigned short unShort;//Unsigned short
    short snShort;         //Signed short
    
    //Input or initialize values Here
    cout<<"Reverse a number and subtract if possible."<<endl;
    cout<<"Input a number in the range of an unsigned short"<<endl;
    cin>>digits;
    unShort = 65535;
    //Test if it is in the Range of an unsigned short
    int resul=inRange(digits,unShort);
    if(resul==0){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    snShort=32767;
    //Reverse and see if it falls in the range of an signed short
    resul=reverse(digits,snShort);
    if(resul==0){
        cout<<"No Conversion Possible"<<endl;
        return 0;
    }
    int test=atoi(digits);
    if(test<=9999&&test>999)
        test*=10;
    else if(test<=999&&test>99)
        test*=100;
    else if(test<=99&&test>9)
        test*=1000;
    else if(test<=9&&test>=0)
        test*=10000;
    snShort=test;
    //Now subtract if the result is not negative else don't subtract
    snShort=subtrct(snShort,999);
    
    //Output the result
    cout<<snShort<<endl;
    
    //Exit
    return 0;
}
bool  inRange(char val[],unsigned short &size)
{
    bool status=true;
    int counter;
    for(int x=0;x<sizeof(val);x++)
    {
        if(isalpha(val[x]))
        {
            status=false;
        }
    }
    int temp=atoi(val);

        if(temp>=size)
        {
            status=false;
    }
    return status;
}
bool  reverse(char val[],signed short &size)
{
    bool status=true;
    int mid;
    int temp=atoi(val);
    if(temp<=9&&temp>=0)
    {
        val[4]=0;
        val[1]=0;
        val[2]=0;
        val[3]=0;
    }
    else if(temp<=99&&temp>9)
    {
        int mid;
        mid=val[0];
        val[0]=val[1];
        val[1]=mid;
        val[3]=0;
        val[2]=0;
        val[4]=0;
    }
    else if(temp<=999&&temp>99)
    {
        int mid;
        mid=val[0];
        val[0]=val[2];
        val[2]=mid;
        val[3]=0;
        val[4]=0;
    }
    else if(temp<=9999&&temp>999)
    {
        int mid1,mid2;
        mid1=val[0];
        mid2=val[1];
        val[0]=val[3];
        val[1]=val[2];
        val[2]=mid2;
        val[3]=mid1;
        val[4]=0;
    }
    else if(temp>=9999)
    {
        int mid1,mid2;
        mid1=val[0];
        mid2=val[1];
        val[0]=val[4];
        val[1]=val[3];
        val[3]=mid2;
        val[4]=mid1;
    }
    int test=atoi(val);
    if(test<=9999&&test>999)
        test*=10;
    else if(test<=999&&test>99)
        test*=100;
    else if(test<=99&&test>9)
        test*=1000;
    else if(test<=9&&test>=0)
        test*=10000;
    if(test>=size)
    {
        status=false;
    }
    return status;
}
short subtrct(signed short val,int size)
{
    short result=val-size;
    return result;
}