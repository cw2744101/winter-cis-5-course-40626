/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Sorting a 2-D array of characters if row and columns match
 * Note:  This time you create the strcmp() function that takes into
 * account the new sort order.
 */

//System Libraries Here
#include <iostream>//cin,cout
#include <cstring> //strlen(),strcmp(),strcpy()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Allowed like PI, e, Gravity, conversions, array dimensions necessary
const int COLMAX=80;//Only 20 required, and 1 for null terminator

//Function Prototypes Here
int  read(char [][COLMAX],int &);//Outputs row and columns detected from input
void sort(char [][COLMAX],int,int,char[],char[]);//Sort by row using strcmp();
void print(const char [][COLMAX],int,int);//Print the sorted 2-D array
//int strcmp(char a[],char b[],char replace[],char with[]){
void strcomp(char [],char [], char [],char []);//Replace sort order

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int ROW=30;             //Only 20 required
    char array[ROW][COLMAX];      //Bigger than necessary 
    int colIn,colDet,rowIn,rowDet;//Row, Col input and detected
    char replace[COLMAX],with[COLMAX];//New sort order
    char a[COLMAX],b[COLMAX];
    
    //Input the new sort order then sort
    cout<<"Modify the sort order by swapping these characters."<<endl;
    cin>>replace;
    cout<<"With the following characters"<<endl;
    cin>>with;
    cout<<"Read in a 2 dimensional array of characters and sort by Row"<<endl;
    cout<<"Input the number of rows <= 20"<<endl;
    cin>>rowIn;
    cout<<"Input the maximum number of columns <=20"<<endl;
    cin>>colIn;
    
    //Now read in the array of characters and determine it's size
    rowDet=rowIn;
    cout<<"Now input the array."<<endl;
    colDet=read(array,rowDet);
    
    //Compare the size input vs. size detected and sort if same
    strcomp(a,b,replace,with);
    //Else output different size
    if(rowDet==rowIn&&colDet==colIn){
        sort(array,rowIn,colIn,replace,with);
        cout<<"The Sorted Array"<<endl;
        print(array,rowIn,colIn);
    }else{
        if(rowDet!=rowIn)
        cout<<(rowDet<rowIn?"Row Input size less than specified.":
            "Row Input size greater than specified.")<<endl;
        if(colDet!=colIn)
        cout<<(colDet<colIn?"Column Input size less than specified.":
            "Column Input size greater than specified.")<<endl;
    }
    
    //Exit
    return 0;
}
int read(char array[][COLMAX],int &rowIn)
{
    for(int x=0;x<10;x++){
        cin>>array[x];
    }
    int x;
    int col=strlen(array[x]);
    for(int x=1;x<3;x++){
        if(strlen(array[x])>col)
        {
            col=strlen(array[x]);
        }   
    }
    
    return col;
}
void strcomp(char old[], char now[], char rep[], char ins[])
{
    int size=strlen(rep);
     bool swap;
     char c,d;
    do{
        swap=false;
        for(int x=0;x<(size-1);x++)
        {
            if(ins[x]>ins[x+1])
            {
                c=ins[x];
                ins[x]=ins[x+1];
                ins[x+1]=c;
                d=rep[x];
                rep[x]=rep[x+1];
                rep[x+1]=d;
                swap=true;
            }  
        }
    }while(swap);
    
    
}
void sort(char val[][COLMAX],int row,int col, char rep[COLMAX], char ins[COLMAX])
{
	int number, minIndex, elems;
	elems = row;
	char minValue[1][col];
    for(int x=0;x<strlen(rep);x++){
		minIndex = x;
		strcpy(minValue[row], val[x]);
		for (int index = 0; index < elems; index++)
		{
			if (val[index][col-1]== rep[x])
			{
				strcpy(minValue[row], val[index]);
				minIndex = index;
			}
		}
		strcpy(val[minIndex], val[x]);
		strcpy(val[x], minValue[row]);
}



}
void print(const char val[][COLMAX],int row,int col)
{
    if(isdigit(val[1][0]))
    {
    for(int x=1;x<row+1;x++)
    {
        cout<<val[x]<<endl;
    }
    }
    else
    {
    for(int x=0;x<row;x++)
    {
        cout<<val[x]<<endl;
    }
    }
}