/* 
 * File:   main.cpp
 * Author: chenlin
 * Purpose: write a simple story
 * Created on 2018/1/11, PM8:09
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    string name,age,city,college,profession,animal,pet;
    
    cout << "Please enter all your information required for this game below."
            << endl;
    cout << "Please enter your name:" << endl;
    cin >> name;
    cout << "Please enter your age:" << endl;
    cin >> age;
    cout << "Please enter a name of a city:" << endl;
    cin >> city;
    cout << "Please enter a name of a college:" << endl;
    cin >> college;
    cout << "Please enter a profession:" << endl;
    cin >> profession;
    cout << "Please enter an animal:" << endl;
    cin >> animal;
    cout << "Please enter a pet's name:" << endl;
    cin >> pet;
    cout << "There once was a person named " << name <<" who lived in" << city
            << ". At the age of " << age << ", " << name << " went to college "
            << "at " << college <<". " << name << " graduated and went to work"
            << "as a " << profession << ". " << "Then, " << name << " adopted "
            << "a(n) " << animal << " named " << pet << ". They both lived "
            << "happily ever after." << endl;
    
    return 0;
}

