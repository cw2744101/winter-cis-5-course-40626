/* 
 * File:   main.cpp
 * Author: YOUR NAME GOES HERE
 * Created on DATE AND TIME HERE
 * Purpose:  Menu to be used in the Midterm, future homework and the Final
 *           Add System Libraries and Functions as needed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type any else number to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
    unsigned short num;
    char shape;       //f-> forward b->backward x->cross
    
    //Input or initialize values Here
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>num>>shape;
    int y =1;
    //Draw the shape
    if(num>=1&&num<=50)
    {switch(shape)
    {
        case 'f':{
            int A=1;
        if((static_cast<float>(num)/2)-num/2==0){
        {for(int a=num;a>0;a--)
            cout<<setw(a)<<a<<endl;
        }
        }
            else{
                for(int a=num; a>0;a--){
                    cout<<setw(a)<<A++<<endl;
                }
            }
        break;}
        case 'b':{
            int A=1;
            if((static_cast<float>(num)/2)-num/2>0){
            for(int b=num;b>0;b--)
                cout<<setw(y++)<<b<<endl;
            }
            else{
                for(int b=num;b>0;b--){
                    cout<<setw(y++)<<A++<<endl;
            }
            }
            break;}
        case 'x':{
            int w =num+1;
            int z=0;
        if((static_cast<float>(num)/2)-num/2>0)
        {
        for(int c=1;c<=num;c++){
            z++;
            w--;
            for(int d=1;d<=num;d++)
            {
                if(c==d)
                    cout<<w;
                else if(d==(num+1)-c)
                    cout<<z;
                else
                    cout<<" ";
            }cout<<endl;
        }
        }
        else
            {
                for(int c=1;c<=num;c++){
            z++;
            w--;
            for(int d=1;d<=num;d++)
            {
                if(c==d)
                    cout<<z;
                else if(d==(num+1)-c)
                    cout<<w;
                else
                    cout<<" ";
            }cout<<endl;
            }
}
    }
    }
    }
    if(num>50||num<1)
        cout<<"please restart the program to input the correct vavlue."<<endl;
    
}

void problem2(){
        //Declare all Variables Here

    char num[4];
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>num;
    //Histogram Here
    for(int x=3;x>=0;x--)
    {
        if(isdigit(num[x]))
        {
           cout<<num[x]<<" ";
           int n=num[x]-'0';
           while(n>0)
           {
               n--;
               cout<<"*";
           }
           cout<<endl;
       }
       else
       {
           cout<<num[x]<<" ?"<<endl;
       }
   }
    
}

void problem3(){    //Declare Variables
    unsigned short num;
    unsigned char n1000s,n100s,n10s,n1s;
    
    //Initialize Variables
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>num;
    
    //Process/Map inputs to outputs
    n1000s=(num-num%1000)/1000;
    num%=1000;
    n100s=(num-num%100)/100;
    num%=100;
    n10s=(num-num%10)/10;
    num%=10;
    n1s=num;
    
    if(num>0 && num<3001)
    {
    //Display the 1000's place
    switch(n1000s){
        case 3:cout<<"Three Thousand ";break;
        case 2:cout<<"Two Thousand ";break;
        case 1:cout<<"One Thousand ";break;
    }
    
    //Display the 100's place
    switch(n100s){
        case 9:cout<<"Nine Hundred " ;break;
        case 8:cout<<"Eight Hundred ";break;
        case 7:cout<<"Seven Hundred ";break;
        case 6:cout<<"Six Hundred ";break;
        case 5:cout<<"Five Hundred ";break;
        case 4:cout<<"Four Hundred ";break;
        case 3:cout<<"Three Hundred ";break;
        case 2:cout<<"Two Hundred ";break;
        case 1:cout<<"One Hundred ";break;
    }
    //Display the 100's place
        if(n10s!=1){
            switch(n10s){
        case 9:cout<<"Ninety ";break;
        case 8:cout<<"Eighty ";break;
        case 7:cout<<"Seventy ";break;
        case 6:cout<<"Sixty ";break;
        case 5:cout<<"Fifty ";break;
        case 4:cout<<"Fourty ";break;
        case 3:cout<<"Thirty ";break;
        case 2:cout<<"Twenty ";break;
        case 1:cout<<"Ten ";break;
    }
    
    //Display the 1's place
    switch(n1s){
        case 9:cout<<"Nine";break;
        case 8:cout<<"Eight";break;
        case 7:cout<<"Seven";break;
        case 6:cout<<"Six";break;
        case 5:cout<<"Five";break;
        case 4:cout<<"Four";break;
        case 3:cout<<"Three";break;
        case 2:cout<<"Two";break;
        case 1:cout<<"One";break;
    }
    }
        else if(n10s=1&&n1s!=0)
        {   
            switch(n1s){
                case 9:cout<<"Nineteen";break;
                case 8:cout<<"Eighteen";break;
                case 7:cout<<"Seventeen";break;
                case 6:cout<<"Sixteen";break;
                case 5:cout<<"Fifteen";break;
                case 4:cout<<"fourteen";break;
                case 3:cout<<"Thirteen";break;
                case 2:cout<<"Twelve";break;
                case 1:cout<<"Eleven";break;
            }
        }
    }
    
    //Output the check value
    
    cout<<" and no/100's Dollars"<<endl;
    
    
}

void problem4(){    //Declare all Variables Here
    char package;
    unsigned short hours;
    double paymentA,paymentB,paymentC,payment,cheap;
    float rate;
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    const double baseA = 16.99; //$
    const double baseB = 26.99;
    const double baseC = 36.99;
    const float ratea1 = 0.95;
    const float ratea2 = 0.85;
    const float rateb1 = 0.74;
    const float rateb2 = 0.64;
    

            if(hours<=10)
                paymentA = baseA;
            else if(hours>20)
                paymentA = baseA + 0.85 *(hours-20)+10*0.95;
            else
                paymentA = baseA +0.95 *(hours-10);

            if(hours<=20)
                paymentB = baseB;
            else if(hours >30)
                paymentB = baseB +0.64*(hours-30)+10*0.74;
            else
                paymentB = baseB + 0.74*(hours-20);

            paymentC = baseC;
    switch(package){
        case 'A':
        case 'a':payment = paymentA;break;
        case 'B':
        case 'b':payment =paymentB;break;
        case 'C':
        case 'c':payment =paymentC;break;}
    
    //Output the Charge
    cout<<"$"<<fixed<<setprecision(2)<<payment;

    //Output the cheapest package and the savings
    if(paymentA<paymentB&&paymentA<paymentC){
        cheap =payment-paymentA;
        cout<<" A "<<fixed<<setprecision(2)<<"$"<<cheap<<endl;}
    else if(paymentB<paymentA&&paymentB<paymentC){
        cheap = payment-paymentB;
        cout<<" B "<<fixed<<setprecision(2)<<"$"<<cheap<<endl;}
    else if (paymentC<paymentA&&paymentC<paymentA){
        cheap = payment-paymentC;
        cout<<" C "<<fixed<<setprecision(2)<<"$"<<cheap<<endl;}
        
    
}

void problem5(){    //Declare all Variables Here
    float payRate;
    unsigned short hrsWrkd;
    double payment;
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if(hrsWrkd<=20){
        payment = hrsWrkd * payRate;
    }
    else if (hrsWrkd>20&&hrsWrkd<=40){
        payment = (hrsWrkd-20) * payRate * 1.5 + 20*payRate;}
    else{
        payment = (hrsWrkd-40)*payRate *2 + 20*payRate*1.5+20*payRate;}
    
    //Output the check
    cout<<"$"<<fixed<<setprecision(2)<<payment<<endl;
    
    
}

void problem6(){    //Declare all Variables Here
    float x,fx,term;
    int nterms,fact;
    int sign =-1;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here
    nterms*=2;
    fx=0;
    if(nterms>0){
    for(int n=1;n<nterms;n+=2){
        fact=1;
        for(int i=1;i<=n;i++){
            fact*=i;}
        sign=-1*sign;
        fx+=pow(x,n)/fact*sign;}
    }
    
    //Output the result here
    if(fx!=0){
    cout<<fixed<<setprecision(6)<<fx;}
    else{
        cout<<fx;
    }
    
    
}