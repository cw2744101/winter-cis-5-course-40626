/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: math tutor generation
 * Created on 2018年1月12日, 上午11:18
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

    unsigned seed = time(0);
    srand(seed);
    char ch;
    double sum, number1, number2, result;
    
    cout << "Welcome to Math Tutor!" << endl;
    cout << "Press any key to generate two number." <<endl;
    cin.get(ch);
    
    number1 = rand()%99999; //please change the number right here in order to
    number2 = rand()%99999; //change the values generate.
    cout << number1 <<endl;
    cout << number2 <<endl;
    cout <<"Please add two number, when you are ready,press any key to continue" 
            <<endl;
    cin.get(ch);
    cout << "Enter your result below." <<endl;
    cin >> result;
    sum = number1 + number2;
    cout << "The sum is " << sum << "." <<endl;
    
    if(result == sum)
    cout << "Congratulation! You get the correct answer. " <<endl;
    else 
    cout << "Sorry, your answer is incorrect." << endl;
    return 0;
}

