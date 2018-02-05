//This is for energy drink consumption question.
#include <iostream>
using namespace std;

int main()
{
    unsigned int customerNumber, 
            oldCustomer,
            favorCustomer;
    double purchaseRate,
            favorRate;
           
    
    customerNumber = 16500; //number of customers who purchase the energy drink
    purchaseRate = 0.15; //percentage that customers buy drink once or more a week
    favorRate = 0.58; //percentage that customers favor citrus
    
    oldCustomer = customerNumber * purchaseRate;
    favorCustomer = customerNumber * favorRate;
    
    cout << "The number of customers who purchase one or more energy drinks"
            << "per week is " << oldCustomer << "." << endl;
    cout << "The number of customers who prefer citrus-favored energy drinks "
            << "is " << favorCustomer << "." << endl;
    return 0;
}