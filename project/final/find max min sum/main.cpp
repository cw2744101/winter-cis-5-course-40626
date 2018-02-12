/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Summing, Finding the Max and Min of an integer array
 * Note:  Look at the output for the format for print
 */

//System Libraries Here
#include <iostream>//cin,cout
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Function Prototypes Here
void read(int [],int);
int  stat(const int [],int,int &,int &);
void print(const int [],int,int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE=80;
    int array[SIZE];
    int sizeIn,sum,min,max;
    
    //Input the size of the array you are sorting
    cout<<"Read in a 1 dimensional array of integers find sum/min/max"<<endl;
    cout<<"Input the array size where size <= 20"<<endl;
    cin>>sizeIn;
    
    //Now read in the array of integers
    cout<<"Now read the Array"<<endl;
    read(array,sizeIn);//Read in the array of integers
    
    //Find the sum, max, and min
    sum=stat(array,sizeIn,max,min);//Output the sum, max and min
    
    //Print the results
    print(array,sizeIn,sum,max,min);//print the array, sum, max and min

    //Exit
    return 0;
}
void read(int val[], int size)
{
    for(int x=0;x<size;x++)
    {
        int num;
        cin>>num;
        val[x]=num;
    }
}
int stat(const int val[],int size,int &up,int &down)
{
 int total = 0;  // Initialize accumulator 
 for (int count = 0; count < size; count++) 
 {total += val[count]; }
 
up = val[0]; 
 for (int count = 1; count < size; count++) 
 { 
    if (val[count] > up) 
       up = val[count]; 
 } 
     
 down = val[0]; 
 for ( int count = 1; count < size; count++) 
 { 
    if (val[count] < down) 
       down = val[count]; 
 }
    return total;
}
void print(const int val[],int size,int total,int up,int down)
{
    for(int x=0;x<size;x++){
    cout<<"a["<<x<<"] = "<<val[x]<<endl;
    }
    cout<<"Min  = "<<down<<endl;
    cout<<"Max  = "<<up<<endl;
    cout<<"Sum  = "<<total<<endl;
}