/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Searching for multiple occurrence of patterns
 * Note:  cout proceeds to null terminator, cin reads to end of line
 *        for character arrays
 * 
 */

//System Libraries Here
#include <iostream>//cin,cout,getline()
#include <cstring> //strlen()
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//PI, e, Gravity, or conversions

//Function Prototypes Begins Here
//srch1 utility function Input->start position, Output->position found or not
//srch1 is a simple linear search function, repeat in srchAll till all found
//srch1 Input->sentence, pattern, start position Output-> position found
//Remember arrays start at index/position 0
//srchAll Input->sentence, pattern Output->position array
int  srch1(const char [],const char [],int);//Search for 1 occurrence
void srchAll(char [],char [],int []);//Search for all occurrences
void print(char []);//Print the character arrays
void print(int []); //Print the array of indexes where the pattern found

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int LINE=81;               //Size of sentence or pattern to find
    char sntnce[LINE],pattern[LINE]; //80 + null terminator
    int match[LINE];                 //Index array where pattern was found
    
    //Input a sentence and a pattern to match
    cout<<"Match a pattern in a sentence."<<endl;
    cout<<"Input a sentence"<<endl;
    cin.getline(sntnce,LINE);
    cout<<"Input a pattern."<<endl;
    cin.getline(pattern,LINE);
    
    //Search for the pattern
    //Input the sentence and pattern, Output the matching positions
    //Remember, indexing starts at 0 for arrays.
    srchAll(sntnce,pattern,match);
    
    //Display the inputs and the Outputs
    cout<<endl<<"The sentence and the pattern"<<endl;
    print(sntnce);
    print(pattern);
    cout<<"The positions where the pattern matched"<<endl;
    print(match);
    
    //Exit
    return 0;
}
void srchAll(char sent[],char word[],int position[])
{
    int index=0;
    position[0]=0;
    int x,y;
    int size=strlen(sent);
    int sizeW=strlen(word);
    string a,b;
    a=sent;
    b=word;
    int found;
    found=a.find(b);
    position[x]=found;
    while(found>0)
    {
        found=a.find(b,found+1);
        position[x+1]=found;
        x++;
    }
}
void print(char sent[])
{
    int x;
    int size=strlen(sent);

    for(int x=0;x<size;x++)
    {
        cout<<sent[x];
    }
    cout<<endl;
}
void print(int loc[])
{
    int x;
    int size;
      if(loc[0]==-1)
        {
            cout<<"None"<<endl;
        }
    else if(loc[0]>0){
        cout<<loc[0]<<endl;

      if(loc[1]>0&&loc[1]<100)
        {
            cout<<loc[1]<<endl;
        }
    if(loc[2]>1&&loc[2]<100)
    {
        cout<<loc[2]<<endl;
    }
        if(loc[3]>1&&loc[3]<100)
        {
            cout<<loc[3]<<endl;
        }
        if(loc[4]>1&&loc[4]<100)
        {
            cout<<loc[4]<<endl;
        }
        if(loc[5]>1&&loc[5]<100)
        {
            cout<<loc[5]<<endl;
        }
        if(loc[6]>1&&loc[6]<200)
        {
            cout<<loc[6]<<endl;
        }
        if(loc[7]>1&&loc[7]<200)
        {
            cout<<loc[7]<<endl;
        }
        if(loc[8]>1&&loc[8]<300)
        {
            cout<<loc[8]<<endl;
        }

    }
}