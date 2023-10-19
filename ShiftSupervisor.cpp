#include "ShiftSupervisor.hpp"
#include <iostream>
using namespace std;


ShiftSupervisor::ShiftSupervisor():Employee(){
    _bonus = 0;
    _salary = 0;
}
ShiftSupervisor::ShiftSupervisor(string name, int number, string hireDate, int salary, int bonus):Employee(name, number, hireDate){
        
    _bonus = bonus;
    _salary = salary;
}

ShiftSupervisor::~ShiftSupervisor(){
}
void ShiftSupervisor::print() const{
    cout << endl;
    cout << "Name: " << this->getName() << endl;
    cout << "Number: " << this->getNumber() << endl;
    cout << "Hire date: " << this->getHireDate() << endl;
    cout << "Salary: $" << this->getSalary() << endl;
    cout << "Bonus: " << this->getBonus() << endl;
    cout << endl;
}