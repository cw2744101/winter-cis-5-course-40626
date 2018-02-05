/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: sorting benchmarks
 * Created on 2018年2月4日, 下午7:07
 */

#include <iostream>
#include <ctime>
using namespace std;
//global constant
//function prototype
void show(const int[], int);
void sort1(int[], int);
void sort2(int[], int);
int main(int argc, char** argv) {
    int num;
    cout<<"Please enter a number at least greater than 20."<<endl;
    cin>>num;
    while(num<20)
    {
        cout<<"Please re-enter the integer."<<endl;
        cin>>num;
    }
    int val1[num];
    int val2[num];
    srand(time(NULL));
    for(int x=0;x<num;x++){
        val1[x]= rand()%99;
        val2[x]= val1[x];
    }
    
    cout<<"show the number before sorting."<<endl;
    show(val1,num);
    sort1(val1,num);
    cout<<"show the number after bubble sorting."<<endl;
    show(val1,num);
    cout<<"show the number before sorting."<<endl;
    show(val2,num);
    sort2(val2,num);
    cout<<"show the number after selection sorting."<<endl;
    show(val2,num);
    return 0;
}
void show(const int val[], int size)
{
    int num;
    for(int x=0;x<size;x++)
    {
        cout<<val[x]<<" ";
    }
    cout<<endl;
}
void sort1(int val[], int size)
{
    int counter=0;
    bool swap;
    int temp;
    do{
        swap=false;
        for(int x=0;x<(size-1);x++)
        {
            if(val[x]>val[x+1])
            {
                temp=val[x];
                val[x]=val[x+1];
                val[x+1]=temp;
                swap=true;
                counter++;
            }
        }
    }while(swap);
    cout<<"The number of exchange is "<<counter<<endl;
}
void sort2(int val[], int size)
{
    int counter=0;
    int start, minIndex, minValue;
    for(start=0;start<(size-1);start++)
    {
        minIndex=start;
        minValue=val[start];
        for(int index = start+1;index <size;index++)
        {
            if(val[index]<minValue)
            {
                minValue=val[index];
                minIndex=index;
            }
        }
        val[minIndex]=val[start];
        val[start]=minValue;
        counter++;
    }
    cout<<"The number of exchange is "<<counter<<endl;
}