/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: searching benchmarks
 * Created on 2018年2月4日, 下午7:07
 */

#include <iostream>
#include <ctime>
using namespace std;
//global constant
//function prototype
void show(const int[], int);
int searching1(int[], int, int);
void sort(int[], int);
int searching2(int[], int, int);
int main(int argc, char** argv) {
    int num;
    int target;
    int result1;
    int result2;
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
    
    cout<<"show the number before searching."<<endl;
    show(val1,num);
    cout<<"select one number from the list to search."<<endl;
    cin>>target;
    cout<<"linear search start."<<endl;
    result1=searching1(val1,num,target);
    if(result1==-1)
        cout<<"The value is not found."<<endl;
    else
    {
        cout<<"The position of the number is "<<result1+1<<endl;
    }
    cout<<"binary search start."<<endl;
    sort(val2,num);
    result2=searching2(val2,num,target);
    if(result2==-1)
        cout<<"The value is not found."<<endl;
    else
    {
        cout<<"The position of the number is "<<result2+1<<endl;
    }
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
int searching1(int val[], int size, int value)
{
    int index=0;
    int position=-1;
    int counter=0;
    bool found=false;
    
    while(index<size&& !found)
    {
        if(val[index]==value)
        {
            found=true;
            position=index;
        }
        index++;
        counter++;
    }
    cout<<"The number of integer has been searched is "<<counter<<endl;
    return position;
}
int searching2(int val[], int size, int value)
{
    int counter=0;
    int first=0;
    int last=size-1;
    int middle;
    int position= -1;
    bool found=false;
    
    while(!found&&first<=last)
    {
        middle=(first+last)/2;
        if(val[middle]==value)
        {
            found =true;
            position=middle;
        }
        else if(val[middle]>value)
        {
            last=middle-1;
        }
        else{
            first=middle+1;
        }
        counter++;
    }
    cout<<"The number has been searched is "<<counter<<endl;
    return position;
}
void sort(int val[], int size)
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
    }
}