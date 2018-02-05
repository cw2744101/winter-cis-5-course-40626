/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: sorting order
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

    int val1[8];
    int val2[8];
    srand(time(NULL));
    for(int x=0;x<8;x++){
        val1[x]= rand()%9;
        val2[x]= val1[x];
    }
    
    cout<<"show the number before sorting."<<endl;
    show(val1,8);
    sort1(val1,8);
    cout<<"show the number after bubble sorting."<<endl;
    show(val1,8);
    cout<<"show the number before sorting."<<endl;
    show(val2,8);
    sort2(val2,8);
    cout<<"show the number after selection sorting."<<endl;
    show(val2,8);
    return 0;
}
void show(const int val[], int size)
{
    for(int x=0;x<size;x++)
    {
        cout<<val[x]<<" ";
    }
    cout<<endl;
}
void sort1(int val[], int size)
{
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
            }        for(int x=0;x<size;x++){
                cout<<val[x]<<" ";
            }
            cout<<endl;
        }            

    }while(swap);
}
void sort2(int val[], int size)
{
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
        for(int x=0;x<size;x++){
            cout<<val[x]<<" ";
        }
        cout<<endl;
    }
}