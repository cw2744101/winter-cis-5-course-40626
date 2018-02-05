/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: Poker Game
 * Created on 2018年1月30日, 下午12:02
 */

#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) {
    
    string intro;
    char ch;
    //give player instruction
    cout<<"Welcome to HIDE THE SEVEN."<<endl;
    cout<<"If you want to read the instruction, enter ins. If you don't,"
            <<"enter anything else to continue."<<endl;
    cin>>intro; //enter intro for instruction
    if( intro == "ins")
    {
        ifstream inFile;//file output
        const int size =81;//maximum size for each word
        char para[81];
        inFile.open("C:\\Users\\chenl\\Documents\\"
        "NetBeansProjects\\project1\\word.txt");//change the locate if the file move
        for(int z=0;z<=350;z++){//repeat for 350 time because of 350 words in the file
        inFile>>para;
        cout<<para<<" ";}
        cout<<endl;
    }
    //select multi-player or single player
    string model;
    cout<<"Type in multi for person verse person, and type single for person vs"
            " computer."<<endl;
    cin>>model;//select single or multi mode
    
    if(model == "multi"){
    //distribute the deck to four people
        int suitnumber;//for suit
    int rank;//for rank
    // create a deck
    srand(time(0));
    //use array to create the deck through deck[x]
    int deck;
    for(int x=0;x<=51;x++)
        deck = x;//put array here
    //reorder the deck
    for(int x=0;x<=51;x++)
    {
        int y = rand()%52; //create another random deck to let it equal to the 
        //former deck
    }
    string sname[4]={"heart","spade","club","diamond"};//4 suit names
    string rname[13]={"ace","2","3","4","5","6","7","8","9",//13 ranks
    "10","jack","queen","king"};
    //show the deck
   for(int x=0; x<=51; x++)
    {
        int suitnumber = deck / 13; // 0 - 3 for suits
        int rank = deck%13;}//%quotient for rank
    
    cout<<endl;

    int x = 0;
    int y = 0;
    int z = 0;
    int a = 0;
    int b = 13;
    int c = 26;
    int d = 39;   
    do{
        if(z%4==0){
            //deck[a]=deck[x]; deck a formation
            a++;
        }
        else if(z%4==1){
            //deck[b]=deck[x]; deck b formation
            b++;
        }
        else if(z%4==2){
            //deck[c]=deck[x]; deck c formation
            c++;
        }
        else if(z%4==3){
            //deck[d]=deck[x]; deck d formation
            d++;
        }
        z++;
        x++;
    }while(z<52);//totally 52 cards
    
    //game start,select deck
    cout<<"This is a notification for your deck.If you choose the same deck as "
            "other players, you must have trouble playing the game."<<endl;
    for(int w=0;w<=3;w++){    
        char choice;//select the deck
    cout<<"Select your deck by entering A,B,C,D."<<endl;
    cin>>choice;//for four people, each person choose one deck
    switch(choice){
        case 'A':
        case 'a':{
            for(int a=0;a<=12;a++){
            //suit number = deck[a] / 13; // 0 - 3 // show each person their deck
       //rank = deck[a] % 13;
}
            break;
        }
        case 'B':
        case 'b':{
            for(int b=13;b<=25;b++){
           // int suitnumber = deck[b] / 13; // 0 - 3//what compose deck b
       // int rank = deck[b] % 13;}
            break;
        }
        case 'C':
        case 'c':{
            for(int c=26;c<=38;c++){
         //   int suitnumber = deck[c] / 13; // 0 - 3
    //    int rank = deck[c] % 13;}// what compose deck c
        break;
        }
        case 'D':
        case 'd':{
            for(int d=39;d<=51;d++){
   //         int suitnumber = deck[d] / 13; // 0 - 3
    //    int rank = deck[d] % 13;}//what compose deck d
        break;
        }
        default:{cout<<"please restart your program to reselect your deck."
                <<endl;//value examination filter wrong answer
    }
    }
    }
        }
    }
    
    
    //decide order
    char ch;
    cout<<"press any key to continue."<<endl;
    cin>>ch;//for a simple break
    
    int order[3];
    srand(time(NULL));

    a=rand()% 6+1; //roll the dice four times to decide order
    b=rand()% 6+1;
    c=rand()% 6+1;
    d=rand()% 6+1;
    
    int first,second,third,last;
    string st,nd,rd,th;
    first = (a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d);//conditional operator to
    second = (a>b?a:b)<(c>d?c:d)?(a>b?a:b):(c>d?c:d);//compare the number of dice
    third = (a<b?a:b)>(c<d?c:d)?(a<b?a:b):(c<d?c:d);
    last = (a<b?a:b)<(c<d?c:d)?(a<b?a:b):(c<d?c:d);
    cout<<first<<second<<third<<last<<endl;//show the order
    cout<<a<<b<<c<<d<<endl;//show the number of dice

    if(first==a){//a series of comparison to notify players about their order of playing
        cout<<"first turn is player a."<<endl;
        st = 'a';//nesting if switch and if-else-if
        if(second == b){
            cout<<"second turn is player b."<<endl;
            nd='b';//this is the order that can be used in game
            if(third == c){
                cout<<"third turn is player c and last turn is player d."<<endl;
                rd='c';
                th='d';
            }
            else{cout<<"third turn is player d and last turn is player c."
                    <<endl;
            rd='d';
            th='c';
            }
        }
        else if(second == c){
            cout<<"second turn is player c."<<endl;
            nd='c';
            if(third == b){
                cout<<"third turn is player b and last turn is player d."<<endl;
                rd='b';
                th='d';
            }
            else{cout<<"third turn is player d and last turn is player b."
                    <<endl;
            rd='d';
            th='b';
            }
        }
        else if(second == d){
            cout<<"second turn is player d."<<endl;
            nd='d';
            if(third == c){
                cout<<"third turn is player c and last turn is player b."<<endl;
                rd='c';
                th='d';
            }
            else{cout<<"third turn is player b and last turn is player c."
                    <<endl;
            rd='d';
            th='c';
            }
        }
    }
    else if(first == b){//second condition
        cout<<"first turn is player b."<<endl;
        st='b';
        if(second == a){
            cout<<"second turn is player a."<<endl;
            nd='a';
            if(third == c){
                cout<<"third turn is player c and last turn is player d."<<endl;
                rd='c';
                th='d';
            }
            else{cout<<"third turn is player d and last turn is player c."
                    <<endl;
            rd='d';
            th='c';
            }
        }
        else if(second == c){
            cout<<"second turn is player c."<<endl;
            nd='c';
            if(third == a){
                cout<<"third turn is player a and last turn is player d."<<endl;
                rd='a';
                th='d';
            }
            else{cout<<"third turn is player d and last turn is player a."
                    <<endl;
            rd='d';
            th='a';
            }
        }
        else if(second == d){
            cout<<"second turn is player d."<<endl;
            nd='d';
            if(third = c){
                cout<<"third turn is player c and last turn is player a."<<endl;
                rd='c';
                th='a';
            }
            else{cout<<"third turn is player a and last turn is player c."
                    <<endl;
            rd='a';
                    th='c';
            }
        }
    }
    else if(first == c){//third condition
        cout<<"first turn is player c."<<endl;
        st='c';
        if(second = b){
            cout<<"second turn is player b."<<endl;
            nd='b';
            if(third == a){
                cout<<"third turn is player a and last turn is player d."<<endl;
                rd='a';
                th='d';
            }
            else{cout<<"third turn is player d and last turn is player a."
                    <<endl;
            rd='d';
            th='a';
            }
        }
        else if(second == a){
            cout<<"second turn is player a."<<endl;
            nd='a';
            if(third == b){
                cout<<"third turn is player b and last turn is player d."<<endl;
                rd='b';
                th='d';
            }
            else{cout<<"third turn is player d and last turn is player b."
                    <<endl;
            rd='d';
            th='b';
            }
        }
        else if(second == d){
            cout<<"second turn is player d."<<endl;
            nd='d';
            if(third == a){
                cout<<"third turn is player a and last turn is player b."<<endl;
                rd='a';
                th='b';
            }
            else{cout<<"third turn is player b and last turn is player a."
                    <<endl;
            rd='b';
            th='a';
            }
        }
    }
    else if(first == d){//last condition
        cout<<"first turn is player d."<<endl;
        st='d';
        if(second == b){
            cout<<"second turn is player b."<<endl;
            nd='b';
            if(third == c){
                cout<<"third turn is player c and last turn is player a."<<endl;
                rd='c';
                th='a';
            }
            else{cout<<"third turn is player a and last turn is player c."
                    <<endl;
            rd='a';
            th='c';
            }
        }
        else if(second == c){
            cout<<"second turn is player c."<<endl;
            nd='c';
            if(third == b){
                cout<<"third turn is player b and last turn is player a."<<endl;
                rd='b';
                th='a';
            }
            else{cout<<"third turn is player a and last turn is player b."
                    <<endl;
            rd='a';
            th='b';
            }
        }
        else if(second == a){
            cout<<"second turn is player a."<<endl;
            nd='a';
            if(third == c){
                cout<<"third turn is player c and last turn is player b."<<endl;
                rd='c';
                th='b';
            }
            else{cout<<"third turn is player b and last turn is player c."
                    <<endl;
            rd='b';
            th='c';
            }
        }
    }

    //special rule
    int count;//simpler counter
    int counter;//simple counter
    int ss;//special points for the calculation of score at the end of game
    for(int a=0;a<=12;a++){//exam special rule
        if(deck%13==12)//rank K
            count++;
        if(deck%13==6)//rank 7
            counter++;
        while(count==4||counter==4)
            cout<<"this player win for special rules."<<endl;
        ss= pow(deck%13,2);//special point
        
    }
        for(int b=0;b<=12;b++){
        if(deck%13==12)//rank K
            count++;
        if(deck%13==6)//rank 7
            counter++;
        while(count==4||counter==4)
            cout<<"this player win for special rules."<<endl;
                ss= pow(deck%13,2);
    }
        for(int c=0;c<=12;c++){
        if(deck%13==12)//rank K
            count++;
        if(deck%13==6)//rank 7
            counter++;
        while(count==4||counter==4)
            cout<<"this player win for special rules."<<endl;
                ss= pow(deck%13,2);
    }
        for(int d=0;d<=12;d++){//for all four players
        if(deck%13==12)//rank K
            count++;//rank 7
        if(deck%13==6)
            counter++;
        while(count==4||counter==4)
            cout<<"this player win for special rules."<<endl;
                ss= pow(deck%13,2);
    }
    
    
    //game start
    //using array to record the card of each player and what card they display
    //score calculate
    float score,grade;
    int num;
    int ace=1;//score for ace
    int king=13;//score for king
    int queen=12;//score for queen
    int jack=11;//score for jack
    bool b1;//bool value to determinate true or false
    int rr;
    for(int x=0;x<=3;x++){
        cout<<"please enter how many card you discarded."<<endl;
        cin>>num;
        if(num>14||num<0){//input correction
            cout<<"please enter the correct value."<<endl;
        }
        else{
        for(int y=1;y<=num;y++){
            if(y<num){
            cout<<"Please enter the rank of your "<<y<<" card."<<endl;
            cin>>rr;}
            else if(y=num){
                cout<<"This is your special half point card."<<endl;
                cin>>rr;
                rr=static_cast<float>(rr)/2;//change data type for calculation
            }
            
            if((rr>13)||(rr<0)){
                cout<<"please enter the correct value."<<endl;
            }
            else{
            score+= rr;
        }
        }

        grade=score;
        if(b1 = y==num){
            cout<<"your score is "<<fixed<<setprecision(2)<<score<<endl;//output formatation
        }
    }
    }
        }
    int grade;
    //record the data to a separate file.
        ofstream outputFile;//using array to record the grade for each 
    outputFile.open("C:\\Users\\chenl\\Documents\\"
    "NetBeansProjects\\project1\\score.txt");//change the location of file if
    outputFile <<"First person:\t"<<grade<<endl;//the project change
    outputFile<<"Second person:\t"<<grade<<endl;
    outputFile<<"Third person:\t"<<grade<<endl;
    outputFile<<"Fourth person:\t"<<grade<<endl;
    outputFile.close();
    return 0;
    }
}

