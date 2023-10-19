#include "ProductionWorker.hpp"
#include <iostream>
using namespace std;

ProductionWorker::ProductionWorker():Employee(){
    _hourlyPay = 0.0;
    _shift = 1;
};
ProductionWorker::ProductionWorker(string name, int number, string hireDate, int shift, double pay):
    Employee(name, number, hireDate){

    _hourlyPay = pay;
    _shift = shift;
};
ProductionWorker::~ProductionWorker(){
};
void ProductionWorker::print() const{
    cout << endl;
    cout << "Name: " << this->getName() << endl;
    cout << "Number: " << this->getNumber() << endl;
    cout << "Hire date: " << this->getHireDate() << endl;
    cout << "Pay rate: $" << this->getPay() << endl;
    cout << "Shift: " << this->getShift() << endl;
    cout << endl;
}