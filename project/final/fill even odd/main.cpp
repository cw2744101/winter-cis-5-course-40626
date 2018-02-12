/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Even, Odd Vectors and Array Columns Even, Odd
 * Note:  Check out content of Sample conditions in Hacker Rank
 * Input size of integer array, then array, output columns of Even, Odd
 * Vectors then Even, Odd 2-D Array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <vector>  //vectors<>
#include <iomanip> //Format setw(),right
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=2;//Only 2 columns needed, even and odd

//Function Prototypes Here
void read(vector<int> &, vector<int> &);
void copy(vector<int>, vector<int>,int [][COLMAX]);
void prntVec(vector<int>, vector<int>,int);//int n is the format setw(n)
void prntAry(const int [][COLMAX],int,int,int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //No more than 80 rows
    int array[ROW][COLMAX];     //Really, just an 80x2 array, even vs. odd
    vector<int> even(0),odd(0); //Declare even,odd vectors
    
    //Input data and place even in one vector odd in the other
    read(even,odd);
    
    //Now output the content of the vectors
    //          setw(10)
    prntVec(even,odd,10);//Input even, odd vectors with setw(10);
    
    //Copy the vectors into the 2 dimensional array
    copy(even,odd,array);
    
    //Now output the content of the array
    //                              setw(10)
    prntAry(array,even.size(),odd.size(),10);//Same format as even/odd vectors
    
    //Exit
    return 0;
}
void read(vector<int> &one, vector<int> &two)
{
    int size;
    cout<<"Input the number of integers to input."<<endl;
    cin>>size;
    cout<<"Input each number."<<endl;
    for(int x=0;x<size;x++)
    {
        int num;
        cin>>num;
        if(num%2==0)
        {
            two.push_back(num);
        }
        else
        {
            one.push_back(num);
        }
    }
}
void prntVec(vector<int> one, vector<int> two,int w)
{
    int size=two.size()<one.size()?two.size():one.size();
    int resize=two.size()>one.size()?two.size():one.size();
    cout<<setw(w)<<"Vector"<<setw(w)<<"Even"<<setw(w)<<"Odd"<<endl;
    for(int x=0;x<size;x++){
    cout<<setw(20)<<two[x]<<setw(w)<<one[x]<<endl;}
    for(int x=size;x<resize;x++)
    {
    if(two.size()<one.size())
    {
        cout<<setw(30)<<one[x]<<endl;
    }
    else
    {
        cout<<setw(20)<<two[x]<<endl;
    }
    }
    
}
void copy(vector<int> one, vector<int> two,int val[][COLMAX])
{
    int size=two.size()<one.size()?two.size():one.size();
    int resize=two.size()>one.size()?two.size():one.size();
    for(int x=0;x<size;x++)
    {
        val[x][0]=two[x];
        val[x][1]=one[x];
    }
    for(int x=size;x<resize;x++)
    {
    if(two.size()<one.size())
    {
        val[x][1]=one[x];
    }
    else
    {
        val[x][0]=two[x];
    }
    }
}
void prntAry(const int val[][COLMAX],int onesize,int twosize,int w)
{
    int size=twosize<onesize?twosize:onesize;
    int resize=twosize>onesize?twosize:onesize;
    cout<<setw(w)<<"Array"<<setw(w)<<"Even"<<setw(w)<<"Odd"<<endl;
    for(int x=0;x<size;x++){
    cout<<setw(20)<<val[x][0]<<setw(w)<<val[x][1]<<endl;
    }
    for(int x=size;x<resize;x++)
    {
    if(twosize<onesize)
    {
        cout<<setw(30)<<val[x][1]<<endl;
    }
    else
    {
        cout<<setw(20)<<val[x][0]<<endl;
    }
    }
}