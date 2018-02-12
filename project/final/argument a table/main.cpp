/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Sum Rows, Sum Columns, Grand Sum of an integer array
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <iomanip> //setw(10)
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;  //Max Columns much larger than needed.

//Function Prototypes Here
void read(int [][COLMAX],int &,int &);//Prompt for size then table
void sum(const int [][COLMAX],int,int,int[][COLMAX]);//Sum rows,col,grand total
void print(const int [][COLMAX],int,int,int);//Either table can be printed

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=80;           //Max Rows much larger than needed
    int array[ROW][COLMAX]={};  //Declare original array
    int augAry[ROW][COLMAX]={}; //Actual augmented table row+1, col+1
    int row,col;                
    
    //Input the original table
    read(array,row,col);
    
    //Augment the original table by the sums
    sum(array,row,col,augAry);
    
    //Output the original array
    cout<<endl<<"The Original Array"<<endl;
    print(array,row,col,10);//setw(10)
    
    //Output the augmented array
    cout<<endl<<"The Augmented Array"<<endl;
    print(augAry,row+1,col+1,10);//setw(10)
    
    //Exit
    return 0;
}
void read(int val[][COLMAX],int &row,int &col)
{
    cout<<"Input a table and output the Augment row,col and total sums."<<endl;
    cout<<"First input the number of rows and cols. <20 for each"<<endl;
    int num;
    cin>>row>>col;
    if(row<81&&col<81){
    
        cout<<"Now input the table."<<endl;
    for(int x=0;x<row;x++)
    {
        for(int y=0;y<col;y++)
        {
            cin>>num;
            val[x][y]=num;
        }
    }
    }
}
void sum(const int val[][COLMAX],int row,int col,int newVal[][COLMAX])
{
    int grandtotal;
    for(int x=0;x<row+1;x++)
    {
        int rowtotal=0;
        for(int y=0;y<col+1;y++)
        {
            if(y<col){
            newVal[x][y]=val[x][y];
            rowtotal+=newVal[x][y];
            }
            if(y==col)
            {
                newVal[x][y]=rowtotal;
            }
        }
    }
    for(int y=0;y<col;y++)
    {
        int coltotal=0;
        for(int x=0;x<row+1;x++)
        {
            if(x<row)
            {
                newVal[x][y]=val[x][y];
                coltotal+=newVal[x][y];
            }
            if(x==row)
            {
                newVal[x][y]=coltotal;
            }
        }
        grandtotal+=newVal[row][y];
    }
    newVal[row][col]=grandtotal;
}
void print(const int val[][COLMAX],int row,int col,int w)
{
    for(int x=0;x<row;x++)
    {
        for(int y=0;y<col;y++)
        {
            cout<<setw(10)<<val[x][y];
        }
        cout<<endl;
    }
}