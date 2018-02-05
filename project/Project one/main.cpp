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
    cin>>intro;
    if( intro == "ins")
    {
        ifstream inFile;
        char para[350];
        inFile.open("C:\\Users\\chenl\\Documents\\"
        "NetBeansProjects\\project1\\word.txt");
        cin.getline(para, 350);
        for(int z=0;z<=350;z++){
        inFile>>para;
        cout<<para<<" ";}
        cout<<endl;
    }
    //select multi-player or single player
    string model;
    cout<<"Type in multi for person verse person, and type single for person vs"
            " computer."<<endl;
    cin>>model;
    
    if(model == "multi"){
    //distribute the deck to four people
        int suitnumber;
    int rank;
    // create a deck
    srand(time(0));
    int deck[52];
    for(int x=0;x<=51;x++)
        deck[x]=x;
    //reorder the deck
    for(int x=0;x<=51;x++)
    {
        int y = rand()%52;
        int inm = deck[x];
        deck[x]=deck[y];
        deck[y]=inm;
    }
    string sname[4]={"heart","spade","club","diamond"};
    string rname[13]={"ace","2","3","4","5","6","7","8","9",
    "10","jack","queen","king"};
    //show the deck
   for(int x=0; x<=51; x++)
    {
        int suitnumber = deck[x] / 13; // 0 - 3
        int rank = deck[x] % 13;}
    
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
            deck[a]=deck[x];
            a++;
        }
        else if(z%4==1){
            deck[b]=deck[x];
            b++;
        }
        else if(z%4==2){
            deck[c]=deck[x];
            c++;
        }
        else if(z%4==3){
            deck[d]=deck[x];
            d++;
        }
        z++;
        x++;
    }while(z<52);
    
    //game start,select deck
    cout<<"This is a notification for your deck.If you choose the same deck as "
            "other players, you must have trouble playing the game."<<endl;
    for(int w=0;w<=3;w++){    
        char choice;
    cout<<"Select your deck by entering A,B,C,D."<<endl;
    cin>>choice;
    switch(choice){
        case 'A':
        case 'a':{
            for(int a=0;a<=12;a++){
            int suitnumber = deck[a] / 13; // 0 - 3
        int rank = deck[a] % 13;
        cout << rname[rank] << " of " << sname[suitnumber]<< "\n";}
            break;
        }
        case 'B':
        case 'b':{
            for(int b=13;b<=25;b++){
            int suitnumber = deck[b] / 13; // 0 - 3
        int rank = deck[b] % 13;
        cout << rname[rank] << " of " << sname[suitnumber]<< "\n";}
            break;
        }
        case 'C':
        case 'c':{
            for(int c=26;c<=38;c++){
            int suitnumber = deck[c] / 13; // 0 - 3
        int rank = deck[c] % 13;
        cout << rname[rank] << " of " << sname[suitnumber]<< "\n";}
        break;
        }
        case 'D':
        case 'd':{
            for(int d=39;d<=51;d++){
            int suitnumber = deck[d] / 13; // 0 - 3
        int rank = deck[d] % 13;
        cout << rname[rank] << " of " << sname[suitnumber]<< "\n";}
        break;
        }
        default:{cout<<"please restart your program to reselect your deck."
                <<endl;
    }
    }
    }
    
    
    //decide order
    char ch;
    cout<<"press any key to continue."<<endl;
    cin>>ch;
    
    int order[3];
    srand(time(NULL));
    for(int x=0;x<=3;x++){
        order[x] =rand()% 6+1;
        cout<<order[x]<<endl;
    }
    
    a=order[0];
    b=order[1];
    c=order[2];
    d=order[3];
    
    int first,second,third,last;
    string st,nd,rd,th;
    first = (a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d);
    second = (a>b?a:b)<(c>d?c:d)?(a>b?a:b):(c>d?c:d);
    third = (a<b?a:b)>(c<d?c:d)?(a<b?a:b):(c<d?c:d);
    last = (a<b?a:b)<(c<d?c:d)?(a<b?a:b):(c<d?c:d);
    cout<<first<<second<<third<<last<<endl;
    cout<<a<<b<<c<<d<<endl;

    if(first==a){
        cout<<"first turn is player a."<<endl;
        st = 'a';
        if(second == b){
            cout<<"second turn is player b."<<endl;
            nd='b';
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
    else if(first == b){
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
    else if(first == c){
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
    else if(first == d){
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

    //game start
    
    //score calculate
    float score;
    int grade;
    int num;
    int ace=1;
    int king=13;
    int queen=12;
    int jack=11;
    bool b1;
    int rr;
    for(int x=0;x<=3;x++){
        cout<<"please enter how many card you discarded."<<endl;
        cin>>num;
        if(num>14||num<0){
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
                rr=static_cast<float>(rr)/2;
            }
            
            if((rr>13)||(rr<0)){
                cout<<"please enter the correct value."<<endl;
            }
            else{
            score+= rr;
        }
        }
        if(b1 = y==num){
            cout<<"your score is "<<fixed<<setprecision(2)<<score<<endl;
        }
    }
    }
    
    //record the data to a separate file.
        ofstream outputFile;
    outputFile.open("C:\\Users\\chenl\\Documents\\"
    "NetBeansProjects\\project1\\score.txt");
    outputFile <<"First person:\t"<<score<<endl;
    outputFile<<"Second person:\t"<<score<<endl;
    outputFile<<"Third person:\t"<<score<<endl;
    outputFile<<"Fourth person:\t"<<score<<endl;
    outputFile.close();
    }
    return 0;
}

