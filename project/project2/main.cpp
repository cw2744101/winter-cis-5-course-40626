/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: hide the seven card game
 * Created on 2018/2/6, PM1:01
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;
//global constant
//none

//function prototype
void Intro();//brief introduction
void generate(int [], int);//generate deck
void sort1(int[], int);//bubble sort for short deck
void sort2(int[], int);//selection sort for long deck
bool searching(int[], int, int);//search for special rule
void order();//select deck
int searching2(int[], int, int);
int searching3(vector<int> &, int, int);
int game();
int score(vector<int>);
int calculate(int);
float calculate(float);
void show(vector<int> &deck)
{
    string sname[4]={"heart","spade","club","diamond"};//4 suit names
    string rname[13]={"ace","2","3","4","5","6","7","8","9",//13 ranks
    "10","jack","queen","king"};
    //show the deck
   for(int x=0; x<deck.size(); x++)
    {
        int suitnumber = deck[x] / 13; // 0 - 3 for suits
        int rank = deck[x] % 13;//%quotient for rank
        cout<<x+1<<" "<<sname[suitnumber]<<" of "<<rname[rank]<<endl;

}
    cout<<endl;
}
int main(int argc, char** argv) {
    //declare variable
    string intro;
    int deck[52];
    cout<<"Welcome to hide the seven."<<endl;
    cout<<"Enter ins if you want to read the instruction. Otherwise, type in any"
            " words to continue."<<endl;
    cin>>intro;
    if(intro=="ins")
    {
    Intro();}
    
    generate(deck, 52);

    
    int x = 0;
    int y = 0;
    int z = 0;
    int w = 0;
    int playa[13],playb[13],playc[13],playd[13];
    do{
        if(z%4==0){
            playa[x]=deck[w]; //deck a formation
        }
        else if(z%4==1){
            playb[x]=deck[w]; // b formation
        }
        else if(z%4==2){
            playc[x]=deck[w]; //deck c formation
        }
        else if(z%4==3){
            playd[x]=deck[w]; //deck d formation
        }
        z++;
        w++;
    }while(z<52);//totally 52 cards

    //decide order and pick deck
    cout<<"Now, it is the time to decide order, press any key to continue."
            <<endl;
    char ch;
    cin>>ch;
    
    int order[4];
    int reorder[4];
    int locationa, locationb, locationc, locationd;
    for(int x=0;x<4;x++){
    order[x]=rand()% 6+1;
    reorder[y]=order[x];
    y++;
    } //roll the dice four times to decide order
    for(int x=0;x>4;x++){
        char person;
    cout<<"Select your deck"<<endl;
    cin>>person;
    switch(person)
    {
        case 'a':cout<<"This player choose deck a"<<endl;break;
        case 'b':cout<<"This player choose deck a"<<endl;break;
        case 'c':cout<<"This player choose deck a"<<endl;break;
        case 'd':cout<<"This player choose deck a"<<endl;break;
    }
    }
    
    sort1(reorder, 4);
    locationa = searching2(reorder, 4, order[0]);
    locationb = searching2(reorder, 4, order[1]);
    locationc = searching2(reorder, 4, order[2]);
    locationd = searching2(reorder, 4, order[3]);
    cout<<"The order is player A:"<<locationa<<"player B:"<<locationb<<"player "
            "C:"<<locationc<<"player D:"<<locationd<<endl;
    
    int result;
    result = searching(playa, 13, 6);
    if(result=true)
    {
        cout<<"Player a win because of special rules"<<endl;
    }
    result = searching(playa, 13, 12);
    if(result=true)
    {
        cout<<"Player a win because of special rules"<<endl;
    }
    result = searching(playb, 13, 6);
    if(result=true)
    {
        cout<<"Player b win because of special rules"<<endl;
    }
    result = searching(playb, 13, 12);
    if(result=true)
    {
        cout<<"Player b win because of special rules"<<endl;
    }
    result = searching(playc, 13, 6);
    if(result=true)
    {
        cout<<"Player c win because of special rules"<<endl;
    }
    result = searching(playc, 13, 12);
    if(result=true)
    {
        cout<<"Player c win because of special rules"<<endl;
    }
    result = searching(playd, 13, 6);
    if(result=true)
    {
        cout<<"Player d win because of special rules"<<endl;
    }
    result = searching(playd, 13, 12);
    if(result=true)
    {
        cout<<"Player d win because of special rules"<<endl;
    }
    while(result=true)
    {
        cout<<"This game is end because of special rules, the winner is very "
                "lucky."<<endl;//adding score calculation here
        exit(0);
    }
    sort1(playa, 13);
    sort1(playb, 13);
    sort1(playc, 13);
    sort1(playd, 13);
    //transfer array to vector
    vector<int>playera;
    vector<int>playerb;
    vector<int>playerc;
    vector<int>playerd;
    vector<int>discarda;
    vector<int>discardb;
    vector<int>discardc;
    vector<int>discardd;

    for(int x=0;x<13;x++)
    {
        playera.push_back(playa[x]);
        playerb.push_back(playb[x]);
        playerc.push_back(playc[x]);
        playerd.push_back(playd[x]);
    }
    int desuit=13;//default size of a suit
    //game start
    int selec;
    for(int x=0;x<13;x++)
    {
        cout<<"First player's turn."<<endl;
        //show deck
        show(playera);
        selec = game();
        string choice1;
        cout<<"Check your deck, decide if you want to discard a card or put a "
                "card. If you want to discard, type in skip, otherwise type in "
                "play."<<endl;
        cin>>choice1;
        int place = searching3(playera, desuit, selec);
        while(place%13 !=6 && x==0)
        {
            cout<<"first turn must input seven."<<endl;
            place = searching3(playera, desuit, selec);
        }
        playera.erase(playera.begin()+(place));
        
        if(choice1 == "skip")
        {
            discarda.push_back(selec);
        }
        
        //show deck
        show(playerb);
        selec = game();

        cout<<"Check your deck, decide if you want to discard a card or put a "
                "card. If you want to discard, type in skip, otherwise type in "
                "play."<<endl;
        cin>>choice1;
        place = searching3(playerb, desuit, selec);
        playerb.erase(playerb.begin()+(place));
        if(choice1 =="skip")
        {
            discardb.push_back(selec);}

        //show deck
        show(playerc);
        selec = game();
        
        cout<<"Check your deck, decide if you want to discard a card or put a "
                "card. If you want to discard, type in skip, otherwise type in "
                "play."<<endl;
        cin>>choice1;
        place = searching3(playerc, desuit, selec);
        playerc.erase(playerc.begin()+(place));
        if(choice1 == "skip")
        {
            discardc.push_back(selec);
        }
        //show deck
        show(playerd);
        selec = game();

        cout<<"Check your deck, decide if you want to discard a card or put a "
                "card. If you want to discard, type in skip, otherwise type in "
                "play."<<endl;
        cin>>choice1;
        place = searching3(playerd, desuit, selec);
        playerd.erase(playerd.begin()+(place));  
        if(choice1 == "skip")
        {
            discardd.push_back(selec);
        }
        desuit--;
    }
    
    //score calculation
    
    int a=score(discarda);
    int b=score(discardb);
    int c=score(discardc);
    int d=score(discardd);
    int first,second,third,last;
    char st,nd,rd,th;
    first = (a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d);//conditional operator to
    second = (a>b?a:b)<(c>d?c:d)?(a>b?a:b):(c>d?c:d);//compare the number of dice
    third = (a<b?a:b)>(c<d?c:d)?(a<b?a:b):(c<d?c:d);
    last = (a<b?a:b)<(c<d?c:d)?(a<b?a:b):(c<d?c:d);
    last = calculate(first);
    float winner = calculate(static_cast<float>(last));
    
    cout<<"Score Summary"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Winner:"<<setw(10)<<fixed<<setprecision(2)<<showpoint<<last<<endl;
    cout<<"Second:"<<setw(10)<<fixed<<setprecision(2)<<showpoint<<third<<endl;
    cout<<"Third:"<<setw(10)<<fixed<<setprecision(2)<<showpoint<<second<<endl;
    cout<<"Last:"<<setw(10)<<fixed<<setprecision(2)<<showpoint<<first<<endl;
    
    ofstream outputFile;//using array to record the grade for each 
    outputFile.open("C:\\Users\\chenl\\Documents\\"
    "NetBeansProjects\\project2\\score.txt");//change the location of file if
    outputFile <<"First person:\t"<<last<<endl;//the project change
    outputFile<<"Second person:\t"<<third<<endl;
    outputFile<<"Third person:\t"<<second<<endl;
    outputFile<<"Fourth person:\t"<<first<<endl;
    outputFile.close();
    return 0;
}
void Intro()
{
        ifstream inFile;//file output
        const int size =81;//maximum size for each word
        char para[81];
        inFile.open("C:\\Users\\chenl\\Documents\\NetBeansProjects\\"
        "project2\\word.txt");//change the locate if the file move
        for(int z=0;z<=350;z++)
        {
        inFile>>para;
        cout<<para<<" ";}
        cout<<endl;
}
void generate(int deck[], int size)
{
    int suitnumber;//for suit
    int rank;//for rank
    // create a deck
    srand(time(0));
    //use array to create the deck through deck[x]
    for(int x=0;x<size;x++)
    {
        deck[x]=x;
    }
    for(int x=0;x<size;x++)
    {
        int y = rand()%52; //create another random deck to let it equal to the former deck 
        int temp=deck[x];
        deck[x]=deck[y];
        deck[y]=temp;
    }
    string sname[4]={"heart","spade","club","diamond"};//4 suit names
    string rname[13]={"ace","2","3","4","5","6","7","8","9",//13 ranks
    "10","jack","queen","king"};
    //show the deck
   for(int x=0; x<size; x++)
    {
        int suitnumber = deck[x] / 13; // 0 - 3 for suits
        int rank = deck[x] % 13;//%quotient for rank
        cout<<x+1<<" "<<sname[suitnumber]<<" of "<<rname[rank]<<endl;

}
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
        }            
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
bool searching(int val[], int size, int value)
{
    int index=0;
    bool position=false;
    int counter=0;
    bool found=false;
    
    while(index<size&& !found)
    {
        if(val[index]%13==value)
        {
            counter++;
        }
        index++;
        if(counter==4)
        {
            found = true;
            position = true;
        }
    }
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
    }
    return position;
}

int game()
{
        string jieji;
        string huase;
        int play;
        cout<<"Please enter the rank and suit for your card."<<endl;
        cin>>jieji>>huase;
        int ss;
        int rr;
        if(huase == "heart")
            {ss=0;}
        else if(huase == "spade")
            {ss=1;}
        else if(huase =="club")
            {ss=2;}
        else if(huase =="diamond")
            {ss=3;}
        else
        {cout<<"Invalid input."<<endl;}

        if(jieji=="ace")
            {rr=0;}
        else if(jieji=="2")
            {rr=1;}
        else if(jieji=="3")
        {rr=2;}
        else if(jieji=="4")
        {rr=3;}
        else if(jieji=="5")
        {rr=4;}
        else if(jieji=="6")
        {rr=5;}
        else if(jieji=="7")
        {rr=6;}
        else if(jieji=="8")
        {rr=7;}
        else if(jieji=="9")
        {rr=8;}
        else if(jieji=="10")
        {rr=9;}
        else if(jieji=="jack")
        {rr=10;}
        else if(jieji=="queen")
        {rr=11;}
        else if(jieji=="king")
        {rr=12;}
        else
        {cout<<"Invalid input."<<endl;}
        play = rr+ss*13;
        cout<<"The card "<<huase<<" of "<<jieji<<" is selected."<<endl;
        return play;
        }
int searching3(vector<int> &val, int size, int value)
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
    }

    return position;
}
int score(vector<int> deck)
{
    int total;
    for(int x=0; x<deck.size();x++)
    {
        total+=deck[x];
    }
    return total;
}
int calculate(int num)
{
    int result;
    result = num * 2;
    return result;
}
float calculate(float numHalf)
{
    float result = numHalf /2;
    return result;
}