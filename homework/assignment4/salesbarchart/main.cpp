/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: sale bar chart
 * Created on 2018/1/19, PM10:49
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    double sale1,sale2,sale3,sale4,sale5;
    
    cout <<"Please enter today's sales for store 1:"<<endl;
    cin>>sale1;
    cout<<"Please enter today's sales for store 2"<<endl;
    cin>>sale2;
    cout<<"Please enter today's sales for store 3"<<endl;
    cin>>sale3;
    cout<<"Please enter today's sales for store 4"<<endl;
    cin>>sale4;
    cout << "Please enter today's sales for store 5"<<endl;
    cin>>sale5;
    
    cout<<"SALES BAR CHART"<<endl
            <<"(each * = $100)"<<endl;
    
        cout<<"STORE 1: ";
        for(int x = 0; x <= sale1 / 10; x++)
        {
            cout<<"*";
        }
        cout<<endl;
        cout<<"STORE 2:";
        for(int y = 0; y <= sale2 / 10; y++)
        {
            cout<<"*";
        }
        cout<<endl;
        cout<<"STORE 3:";
        for(int z = 0; z <= sale3 / 10; z++)
        {
            cout<<"*";
        }
        cout<<endl;
        cout<<"STORE 4:";
        for(int a = 0; a <= sale4 / 10; a++)
        {
            cout<<"*";
        }
        cout<<endl;
        cout<<"STORE 5:";
        for(int b = 0; b <= sale5 / 10; b++)
        {
            cout<<"*";
        }
        cout<<endl;
    
    
    return 0;
}

